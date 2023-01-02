#ifndef functions_H
#define functions_H
#include <map>
#include<iostream>
#include<string>
#include<Windows.h>
#pragma comment(lib , "libmySQL.lib")
#include <mysql.h>
#include<vector>
#include <list>
#include <msclr\marshal_cppstd.h>

using namespace std;

class resourceData {
public:
	string ulid;
	string image;
	string resourcename;
	string classification;
	string status;
	string location;
	string user;
	string entroll_date;
	string modify_date;
	string where_purchase;
	string first_purchase;
	string price;
};

class history {
public:
	string manager;
	string process_date;
	string division;
	string classification;
	string content;
	string etc;
};

class resourceManagement {
public:
	// 소프트웨어 정보
	void updateSystemInfo(string id);
	void updateSoftwareInfo(string id);
	void getSoftwareInfo(const char* ulid);
	void getSystemInfo(const char* ulid);
	string GetProcessorName();
	string getBaseBoard();
	string GetOSName();
	list<string> getMemory();
	list<string> getHDD();
	vector<string> getGPU();
	string getOSUUID();
	map<string, vector<string>> getInstalledSoftware();
};

#endif