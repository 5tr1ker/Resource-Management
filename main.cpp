#include "functions.h"
#include "resourceInfo.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	//cs_util_register_start_Prog();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	comonResourceManagement::resourceInfo form;
	Application::Run(% form);
}

/*
* #include "atlbase.h"
#include <direct.h>

void cs_util_register_start_Prog()
{
	char* pstrBuffer = NULL;
	char strBuffer[_MAX_PATH] = { };
	pstrBuffer = getcwd(strBuffer, _MAX_PATH);
	strcat_s(strBuffer, "\\comonResourceManagement.exe");

	CRegKey RegKey;
	wchar_t wtext[255];
	mbstowcs(wtext, strBuffer, strlen(strBuffer) + 1);
	LPWSTR ptr = wtext;

	cout << strBuffer;
	RegKey.Create(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run");
	RegKey.SetValue(ptr, L"itman");
	RegKey.Close();
}
*/