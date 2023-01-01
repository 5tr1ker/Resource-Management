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

class resourceManagement {
public:
	// 소프트웨어 팝업 정보
	list<string> getClassificationList();
	list<string> getStatusList();
	list<string> getLocationList();
	list<string> getUserList();
	list<string> getBuyerList();
	int createNewList(string query);
	int updateResource(string query);
	// 소프트웨어 정보
	void updateSystemInfo();
	void updateSoftwareInfo();
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
	// 자산 분류
	string createULID();
	int createResource(string ulid, string  images, string  resource, string  classification, string  status, string  location, string  user, string  buyer, string  purchaseDate, string price);
	void getTotalResourceCount();
	resourceData getDetailResource(const char* ulid);
	void getAllResource(int limit, int page);
	void searchResource(const char* item, const char* search, int limit, int page);
	void modifiyResource(const char* ulid, const char* item, const char* data);
	// 히스토리
	void getHistory();
	void createHistory(string division, string classification, string content, string etc);

};

#endif