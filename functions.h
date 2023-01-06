#ifndef functions_H
#define functions_H
#include <map>
#include<iostream>
#include<string>
#include<Windows.h>
#include<vector>
#include <list>
#include <msclr\marshal_cppstd.h>
#include <curl/curl.h>

// #include <fstream>

using namespace std;

class resourceData {
public:
	string name;
	string vendor;
	string version;
};

class resourceManagement {
public:
	// 소프트웨어 정보
	//string updateSystemInfo(string id);
	//string updateSoftwareInfo(string id , vector<resourceData> result);
	string createDataJson(string id, vector<resourceData> result);
	//void getSoftwareInfo(const char* ulid);
	//void getSystemInfo(const char* ulid);
	string GetProcessorName();
	string getBaseBoard();
	string GetOSName();
	list<string> getMemory();
	list<string> getHDD();
	vector<string> getGPU();
	string getOSUUID();
	vector<resourceData> findSoftware();
};

#endif