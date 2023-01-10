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
#include <curl/easy.h>
#include <conio.h>
// #include <cstring>
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
	string createDataJson(string id, vector<resourceData> result);
	string GetProcessorName();
	string getBaseBoard();
	string GetOSName();
	list<string> getMemory();
	list<string> getHDD();
	vector<string> getGPU();
	string getOSUUID();
	vector<resourceData> findSoftware();
	bool updateData(string jsonData);
};

#endif