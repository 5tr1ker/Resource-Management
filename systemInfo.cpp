#include "functions.h"
#define BUFF_SIZE 1024

#include "json/json.h"

size_t write_html(void* ptr, size_t size, size_t count, void* stream) { // 데이터 쓰기 함수
    ((string*)stream)->append((char*)ptr, 0, size * count); // stream에 문자열을 추가한다.
    return size * count;
}

string replaceAll(const string& str, const string& pattern, const string& replace)
{
    string result = str;
    string::size_type pos = 0;
    string::size_type offset = 0;
    while ((pos = result.find(pattern, offset)) != string::npos)
    {
        result.replace(result.begin() + pos, result.begin() + pos + pattern.size(), replace);
        offset = pos + replace.size();
    }
    return result;
}

bool checkAlpha(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) == 0) {
            return false;
        }
    }

    return true;
}

std::string resourceManagement::GetProcessorName()
{
    wchar_t Cpu_info[100];
    HKEY hKey;
    int i = 0;
    long result = 0;
    DWORD c_size = sizeof(Cpu_info);

    //레지스트리를 조사하여 프로세서의 모델명을 얻어냅니다.
    RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"Hardware\\Description\\System\\CentralProcessor\\0", 0, KEY_QUERY_VALUE, &hKey);
    RegQueryValueEx(hKey, L"ProcessorNameString", NULL, NULL, (LPBYTE)Cpu_info, &c_size);
    RegCloseKey(hKey);

    //GetSystemInfo 함수를 이용해 논리적 코어 개수를 얻어냅니다.
    /*
    wchar_t num[8];
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    swprintf(num, 8, L" * %d", systemInfo.dwNumberOfProcessors);
    wcscat_s(Cpu_info, 100, num);
    */

    wstring ws(Cpu_info);
    string str(ws.begin(), ws.end());
    return str;
}

std::string resourceManagement::getBaseBoard() {
    wchar_t BaseBoard_info[100];
    wchar_t BaseBoard_product[100];
    wchar_t BaseBoard_Version[100];
    HKEY hKey;
    int i = 0;
    long result = 0;
    DWORD c_size = sizeof(BaseBoard_info);

    //레지스트리를 조사하여 프로세서의 모델명을 얻어냅니다.
    RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"Hardware\\Description\\System\\BIOS", 0, KEY_QUERY_VALUE, &hKey);
    if (RegQueryValueEx(hKey, L"BaseBoardManufacturer", NULL, NULL, (LPBYTE)BaseBoard_info, &c_size) != ERROR_SUCCESS)
    {
        return "Fail to Load the BaseBoardManufacturer";
    }
    if (RegQueryValueEx(hKey, L"BaseBoardProduct", NULL, NULL, (LPBYTE)BaseBoard_product, &c_size) != ERROR_SUCCESS)
    {
        return "Fail to Load the BaseBoardProduct";
    }
    if (RegQueryValueEx(hKey, L"BaseBoardVersion", NULL, NULL, (LPBYTE)BaseBoard_Version, &c_size) != ERROR_SUCCESS)
    {
        return "Fail to Load the BaseBoardVersion";
    }

    RegCloseKey(hKey);

    wstring ws(BaseBoard_info);
    string str(ws.begin(), ws.end());
    wstring ws2(BaseBoard_product);
    string str2(ws2.begin(), ws2.end());
    wstring ws3(BaseBoard_Version);
    string str3(ws3.begin(), ws3.end());
    return str + " " + str2 + " " + str3;
}

std::string resourceManagement::GetOSName()
{
    wchar_t ProductName[100];
    wchar_t CSDVersion[100];
    wchar_t Version[100];
    std::wstring Os_info;

    HKEY hKey;
    int i = 0;

    DWORD c_size = 100;

    //레지스트리를 조사하여 운영체제 이름을 조사합니다.
    if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_READ, &hKey) != ERROR_SUCCESS)
    {
        return "Fail to Open OS_info";
    }
    if (RegQueryValueEx(hKey, L"ProductName", NULL, NULL, (LPBYTE)ProductName, &c_size) != ERROR_SUCCESS)
    {
        return "Fail to Load the ProductName";
    }
    if (RegQueryValueEx(hKey, L"CurrentBuild", NULL, NULL, (LPBYTE)Version, &c_size) != ERROR_SUCCESS)
    {
        return "Fail to Load the BuildLab";
    }
    if (RegQueryValueEx(hKey, L"CSDVersion", NULL, NULL, (LPBYTE)CSDVersion, &c_size) != ERROR_SUCCESS)
    {
        RegCloseKey(hKey);
        // return ProductName;
    }
    wstring ws(ProductName);
    string str(ws.begin(), ws.end());

    wstring ws2(Version);
    string str2(ws2.begin(), ws2.end());

    RegCloseKey(hKey);

    return str + " " + str2;
}

std::string ExecCommand(std::string szCmdArg)
{
    std::string szResult;

    HANDLE hChildStdoutRd;
    HANDLE hChildStdoutWr;

    BOOL fSuccess;

    // Create security attributes to create pipe.
    SECURITY_ATTRIBUTES saAttr = { sizeof(SECURITY_ATTRIBUTES) };
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    // Create a pipe to get results from child's stdout.
    if (!CreatePipe(&hChildStdoutRd, &hChildStdoutWr, &saAttr, 0))
    {
        return szResult;
    }

    STARTUPINFOA si = { sizeof(STARTUPINFO) };

    si.dwFlags = STARTF_USESHOWWINDOW | STARTF_USESTDHANDLES;
    si.hStdOutput = hChildStdoutWr;
    si.hStdError = hChildStdoutWr;
    si.wShowWindow = SW_HIDE;

    PROCESS_INFORMATION pi = { 0 };

    // Create the child process.
    fSuccess = CreateProcessA(
        NULL,
        (LPSTR)szCmdArg.c_str(),    // command line
        NULL,                       // process security attributes
        NULL,                       // primary thread security attributes
        TRUE,                       // TRUE=handles are inherited. Required.
        CREATE_NEW_CONSOLE,         // creation flags
        NULL,                       // use parent's environment
        NULL,                       // use parent's current directory
        &si,                        // __in, STARTUPINFO pointer
        &pi);                       // __out, receives PROCESS_INFORMATION

    if (!fSuccess)
    {
        return szResult;
    }

    // Wait until child processes exit. Don't wait forever.
    WaitForSingleObject(pi.hProcess, 2000);
    TerminateProcess(pi.hProcess, 0);

    if (!CloseHandle(hChildStdoutWr))
    {
        return szResult;
    }

    for (;;)
    {
        DWORD dwRead;
        CHAR chBuf[4096];

        bool done = !ReadFile(hChildStdoutRd, chBuf, 4096, &dwRead, NULL) || dwRead == 0;
        if (done)
        {
            break;
        }

        szResult += chBuf;
    }

    CloseHandle(hChildStdoutRd);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return szResult;
}

string RunCommand(char* command) {
    char  buff[BUFF_SIZE];
    FILE* fp;
    string result;

    fp = _popen(command, "r");
    if (NULL == fp)
    {
        perror("popen() 실패");
        return NULL;
    }

    while (fgets(buff, BUFF_SIZE, fp)) {
        result += buff;
    }
    //printf("%s", buff);

    _pclose(fp);
    return result;
}

list<string> resourceManagement::getHDD() {
    char cmd[] = "wmic diskdrive get Model , size";
    string result = RunCommand(cmd);

    vector<string> vector;
    string str;
    for (int i = 0; result.length() > i; i++) {
        if (result[i] != ' ') str += result[i];
        if (result[i] == ' ') {
            if (result.length() > i && result[i + 1] == ' ') {
                if (str != " " && str.size() != 0) vector.push_back(str);
                str = "";
                while (result[i + 1] != ' ' && result.length() > i) {
                    i++;
                }
            }
        }
    }

    list<string> returnData;
    for (int i = 2; i < vector.size(); i += 2) {
        string np = vector.at(i + 1);
        vector[i + 1] = np.substr(0, np.size() - 9) + "GB";
        returnData.push_back(vector.at(i) + " " + vector.at(i + 1));
    }
    return returnData;
}

vector<string> resourceManagement::getGPU() {
    char cmd[] = "wmic path win32_VideoController get name";
    string gpu = RunCommand(cmd);
    string result = gpu.substr(6); // Model 문구 제거
    int npos = result.find_first_not_of(' ');
    result.erase(0, npos + 2);

    vector<string> vector;
    string str;
    for (int i = 0; result.length() > i; i++) {
        str += result[i];
        if (result[i] == ' ') {
            if (result.length() > i && result[i + 1] == ' ') {
                if (str != " ") vector.push_back(str);
                str = "";
                while (result[i + 1] != ' ' && result.length() > i) {
                    i++;
                }
            }
        }
    }

    return vector;
}

string resourceManagement::getOSUUID() {
    char cmd[] = "wmic csproduct get uuid";
    string gpu = RunCommand(cmd);
    string result = gpu.substr(5); // UUID 문구 제거
    int npos = result.find_first_not_of(' ');

    return result.erase(0, npos + 2);;
}

vector<resourceData> resourceManagement::findSoftware() {
    char  buff[BUFF_SIZE];
    FILE* fp;
    vector<resourceData> data;

    fp = _popen("wmic product get name , vendor , version" , "r");
    if (NULL == fp)
    {
        perror("popen() 실패");
    }

    vector<string> tmp;
    while (fgets(buff, BUFF_SIZE, fp)) {
        string str = "";
        for (int i = 0; buff[i] != EOF; i++) {
            str += buff[i];
            if (buff[i] == ' ') {
                if (buff[i] != EOF && buff[i + 1] == ' ' && buff[i + 2] != 'x') {
                    if (str != " ") tmp.push_back(str);
                    str = "";
                    while (buff[i + 1] != ' ' && buff[i] != EOF) {
                        i++;
                    }
                }
            }
        }

        resourceData newRd;
        int stackSize = tmp.size() - 1;
        if (stackSize < 2) continue;
        newRd.version = tmp[stackSize--];
        newRd.vendor = tmp[stackSize--];
        for (int i = stackSize; i >= 0; i--) {
            newRd.name = tmp[i] + newRd.name;
        }
        tmp.clear();
        data.push_back(newRd);
    }

    return data;
}

/*
* 20 DDR
* 21 DDR2
* 22 DDR2 FB-DIMM
* 24 DDR3
* 26 DDR4
* 1073741824Byte = 1GB
*/
list<string> resourceManagement::getMemory() {
    char cmd[] = "wmic memorychip get manufacturer , Capacity , SMBIOSMemoryType , partNumber"; // 메모리 용량과 DDR 타입 가져오기  , partNumber
    //string result = "Capacity   manufacturer   PartNumber  SMBIOSMemoryType\n  8589934592  samsung  ABCABC  26\n  8589934592  samsung   ABCABC  26";
    string result = RunCommand(cmd);

    string str;
    vector<string> vector;
    list<string> returnIndex;

    // cout << result << endl;
    for (int i = 0; result.length() > i; i++) {
        if (result[i] != ' ') str += result[i];
        if (result[i] == ' ') {
            if (result.length() > i && result[i + 1] == ' ') {
                if (str != " " && str.length() > 0) vector.push_back(str);
                str = "";
                while (result[i + 1] != ' ' && result.length() > i) {
                    i++;
                }
            }
        }
    }

    // 마지막 남은 문자 추가
    str.erase(str.find_last_not_of(" \n\r\t") + 1);
    if (str.size() != 0) {
        vector.push_back(str);
    }

    int idx = 0;
    for (int i = 4; vector.size() > i; i += 2) {
        string memorySize = vector.at(i);
        string manufacture = vector.at(i + 1);
        i++;
        string partNumber;
        if (!checkAlpha(vector[i + 1])) { // part 번호가 존재할 때
            partNumber = vector.at(i + 1);
            i++;
        }
        string code = vector.at(i + 1);
        code.erase(code.find_last_not_of(" \n\r\t") + 1);

        string afterCode;
        memorySize = memorySize.substr(0, memorySize.length() - 9) + "GB"; // 메모리 전체크기
        for (int i = 0; i < memorySize.size(); i++) { // 개행문자 제거
            if (memorySize[i] > 14) break;
            else memorySize[i] = ' ';
        }

        if (code == "20") afterCode = "DDR";
        else if (code == "21") afterCode = "DDR2";
        else if (code == "22") afterCode = "DDR2 FB-DIMM";
        else if (code == "24") afterCode = "DDR3";
        else if (code == "26") afterCode = "DDR4";

        returnIndex.push_back(manufacture + " " + afterCode + " " + memorySize + " " + partNumber);
    }

    return returnIndex;
}

string resourceManagement::createDataJson(string id, vector<resourceData> result) {
    string str;
    Json::StyledWriter writer;
    Json::Value hardwareroot;
    Json::Value softwareRoot;
    Json::Value root;

    Json::Value hdd;
    list<string> hddList = getHDD();
    for (string str : hddList)
        hdd.append(replaceAll(str, "\r\n", ""));

    Json::Value memory;
    list<string> memoryList = getMemory();
    for (string str : memoryList)
        memory.append(replaceAll(str, "\r\n", ""));

    Json::Value gpu;
    vector<string> gpuList = getGPU();
    for (string str : gpuList)
        gpu.append(replaceAll(str, "\r\n", ""));

    hardwareroot["os"] = replaceAll(GetOSName(), "\r\n", "");
    hardwareroot["cpu"] = replaceAll(GetProcessorName(), "\r\n", "");
    hardwareroot["baseBoard"] = replaceAll(getBaseBoard(), "\r\n", "");
    hardwareroot["uuid"] = replaceAll(getOSUUID(), "\r\n", "");
    hardwareroot["hdd"] = hdd;
    hardwareroot["memory"] = memory;
    hardwareroot["gpu"] = gpu;

    result.erase(result.begin());
    for (resourceData data : result) {
        Json::Value piece;
        string name = data.name;
        if (name.size() < 5) {
            continue;
        }
        piece["name"] = replaceAll(data.name, "\r\n", "");
        piece["vendor"] = replaceAll(data.vendor, "\r\n", "");
        piece["version"] = replaceAll(data.version, "\r\n", "");

        softwareRoot.append(piece);
    }

    root["ulid"] = id;
    root["software"] = softwareRoot;
    root["hardware"] = hardwareroot;
    string resultdata = writer.write(root);

    return resultdata;
}

bool resourceManagement::updateData(string jsonData) {
    CURL* curl;
    CURLcode res;
    struct curl_slist* t_headers;

    curl = curl_easy_init();
    if (curl) {
        // 테스트 서버 : pica23000.cafe24.com/itman/html/ingroup/rest.php
        // 본 서버 : itman.pms.or.kr/html/ingroup/rest.php
        curl_easy_setopt(curl, CURLOPT_URL, "itman.pms.or.kr/html/ingroup/rest.php"); // url 변수를 GET 요청 주소로 사용

        //t_headers = curl_slist_append(t_headers, "Content-Type : application/json");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_html); // 쓰기 함수에 write_html() 사용
        //curl_easy_setopt(curl, CURLOPT_HTTPHEADER, t_headers); // 헤더 설정
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonData.c_str()); // JSON 데이터 

        res = curl_easy_perform(curl); // 데이터 전송

        curl_easy_cleanup(curl);

        if (res == CURLE_OK) return true;
        else return false;
    }
}
