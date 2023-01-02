#include "functions.h"
#include <ctime>
/*
CREATE TABLE `comon`.`historys` (
  `idhistorys` INT NOT NULL AUTO_INCREMENT,
  `manager` VARCHAR(45) NOT NULL,
  `process_date` DATETIME NOT NULL,
  `division` VARCHAR(45) NOT NULL,
  `classification` VARCHAR(100) ,
  `content` VARCHAR(100) ,
  `etc` VARCHAR(45) ,
  PRIMARY KEY (`idhistorys`));
*/
list<string> resourceManagement::getHistory() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;
	list<string> resultList;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024] = "select * from historys;";
	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			for (int i = 1; i <= 6; i++) {
				resultList.push_back(row[i]);
			}
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return resultList;
}

void resourceManagement::createHistory(string division, string classification, string content, string etc) {
	MYSQL* conn, connection;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");

	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	string times = to_string(t->tm_year + 1900) + "-" + to_string(t->tm_mon + 1) + "-" + to_string(t->tm_mday) + " " + to_string(t->tm_hour) + ":" + to_string(t->tm_min) + ":" + to_string(t->tm_sec);

	string queryInsert = "'manager' , '"+ times + "' , '" + string(division) + "' , '" + string(classification) + "' , '" + string(content) + "' , '" + string(etc) + "');";
	string query = "INSERT INTO historys (manager , process_date , division , classification , content , etc) VALUES (" + queryInsert;
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) != 0) {
		cout << "sql 실행에 실패했습니다.";
	}
}