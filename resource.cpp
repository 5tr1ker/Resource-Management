#include "functions.h";

/*
CREATE TABLE `comon`.`resource_details` (
  `ulid` VARCHAR(100) NOT NULL,
  `image` VARCHAR(100) ,
  `resourcename` VARCHAR(100) NOT NULL,
  `Classification` VARCHAR(45) NOT NULL,
  `status` VARCHAR(45) NOT NULL,
  `location` VARCHAR(45) NOT NULL,
  `user` VARCHAR(45) ,
  `entroll_date` VARCHAR(45) NOT NULL,
  `modify_date` VARCHAR(45) NOT NULL,
  `where_purchase` VARCHAR(45) ,
  `first_purchase` VARCHAR(45) ,
  `price` VARCHAR(45)
  PRIMARY KEY (`ulid`));
*/
int resourceManagement::createResource(string ulid, string  images, string  resource, string  classification, string  status, string  location, string  user, string  buyer, string  purchaseDate, string price) {
	// ULID , 자산 이미지 , 자산명 , 분류 , 최초 등록 일시 , 상태 , 위치 , 사용직원 , 최종 수정 일시 , 구매처 , 최초 구매일 , 가격
	MYSQL* conn, connection;
	MYSQL_RES* result;
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
	string query = "INSERT INTO `comon`.`resource_details` (`ulid` , `image`, `resourcename`, `classification`, `status`, `location`, `user`, `entroll_date`, `modify_date`, `where_purchase`, `first_purchase`, `price`) VALUES ( '" + ulid + "' , '" + images + "', '" + resource +"', '" + classification +"', '" + status +"', '" + location +"', '" + user +"', '" + purchaseDate +"' , '" + purchaseDate +"', '" + buyer +"', '" + purchaseDate +"', '" + price +"');";


	strcpy_s(sql, query.c_str());
	if (mysql_query(conn, sql) != 0) {
		cout << "오류 쿼리 : " << sql << endl;
		return -1;
	}

	return 1;
}

string resourceManagement::createULID() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];


	string ulid;
	while (true) {
		srand((unsigned int)time(NULL));
		ulid = "";
		for (int i = 0; i < 10; i++) { // 일련번호 생성
			std::string alphabet = "570968123405981647230908243765175896420312983645071";
			char ch = alphabet[rand() % alphabet.size()];
			ulid += ch;
		}
		string query = "select ulid from resource_details where ulid = '" + ulid + "';";
		strcpy_s(sql, query.c_str());

		if (mysql_query(conn, sql) == 0) { // 일련변호가 겹치는지 확인
			result = mysql_store_result(conn);
			if ((row = mysql_fetch_row(result)) == NULL) { // 겹치지 않을 경우 종료
				break;
			};
			mysql_free_result(result);
		}
	}

	return ulid;
}

void resourceManagement::getDetailResource(const char* ulid) {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	string ulid_id(ulid);
	string query = "SELECT * from resource_details where ulid = '" + ulid_id + "';";
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			cout << row[0] << row[1] << row[2] << endl;
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

}

void resourceManagement::getTotalResourceCount() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	string query = "select COUNT(*) from resource_details;";
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			cout << row[0] << endl;
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}
}

void resourceManagement::getAllResource(int limit, int page) {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	string queryPaging = " limit " + to_string(limit) + " offset " + to_string(limit * (page - 1)) + ";";
	string query = "SELECT image , ulid , resourcename , classification , status , user , location from resource_details" + queryPaging;
	strcpy_s(sql, query.c_str());

	cout << sql;
	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			cout << row[0] << " : " << row[1] << " : " << row[2] << " : " << row[3] << " : " << row[4] << " : " << endl;
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}
}

void resourceManagement::searchResource(const char* item, const char* search, int limit, int page) {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	string queryPaging = " limit " + to_string(limit) + " offset " + to_string(limit * (page - 1)) + ";";
	string querySearch = " where " + string(item) + " like '%" + string(search) + "%'";
	string query = "SELECT image , ulid , resourcename , classification , status , user , location from resource_details" + querySearch + queryPaging;
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			cout << row[0] << " : " << row[1] << " : " << row[2] << " : " << row[3] << " : " << row[4] << endl;
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}
}

void resourceManagement::modifiyResource(const char* ulid, const char* item, const char* data) {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";

	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];

	string queryModify = string(item) + " = '" + string(data) + "' WHERE ulid = " + string(ulid);
	string query = "UPDATE resource_details SET " + queryModify;
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			cout << row[0] << " : " << row[1] << " : " << row[2] << " : " << row[3] << " : " << row[4] << endl;
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}
}

/*
CREATE TABLE `comon`.`classification_list` (
  `classification_id` INT NOT NULL AUTO_INCREMENT,
  `classification_item` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`classification_id`));

  INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('PC');
INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('노트북');
INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('키보드');
INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('마우스');
INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('태블릿');
INSERT INTO `comon`.`classification_list` (`classification_item`) VALUES ('전화기');
*/
list<string> resourceManagement::getClassificationList() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";


	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];
	string query = "select classification_item from classification_list;";

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			list.push_back(row[0]);
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return list;
}

/*
CREATE TABLE `comon`.`status_list` (
  `idstatus_list_id` INT NOT NULL AUTO_INCREMENT,
  `idstatus_list_items` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idstatus_list_id`));

INSERT INTO `comon`.`status_list` (`idstatus_list_items`) VALUES ('사용중');
INSERT INTO `comon`.`status_list` (`idstatus_list_items`) VALUES ('사용안함');
INSERT INTO `comon`.`status_list` (`idstatus_list_items`) VALUES ('요청');
INSERT INTO `comon`.`status_list` (`idstatus_list_items`) VALUES ('수리중');
INSERT INTO `comon`.`status_list` (`idstatus_list_items`) VALUES ('분실');
*/
list<string> resourceManagement::getStatusList() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";


	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];
	string query = "select idstatus_list_items from status_list;";

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			list.push_back(row[0]);
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return list;
}

/*
CREATE TABLE `comon`.`location_list` (
  `idlocation_list` INT NOT NULL AUTO_INCREMENT,
  `location_items` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idlocation_list`));

  INSERT INTO `comon`.`location_list` (`location_items`) VALUES ('101호');
*/
list<string> resourceManagement::getLocationList() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";


	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];
	string query = "select location_items from location_list;";

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			list.push_back(row[0]);
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return list;
}

/*
CREATE TABLE `comon`.`user_list` (
  `iduser_list` INT NOT NULL AUTO_INCREMENT,
  `user_items` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`iduser_list`));

  INSERT INTO `comon`.`user_list` (`user_items`) VALUES ('박상진');
*/
list<string> resourceManagement::getUserList() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";


	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];
	string query = "select user_items from user_list;";

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			list.push_back(row[0]);
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return list;
}

/*
* CREATE TABLE `comon`.`buyer_list` (
  `idbuyer_list` INT NOT NULL AUTO_INCREMENT,
  `buyer_items` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idbuyer_list`));

  INSERT INTO `comon`.`buyer_list` (`buyer_items`) VALUES ('오픈아이티');
*/
list<string> resourceManagement::getBuyerList() {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
	char DB_HOST[] = "localhost";
	char DB_USER[] = "root";
	char DB_PASS[] = "password";
	char DB_NAME[] = "comon";


	// DB 커넥션 연결
	mysql_init(&connection);
	conn = mysql_real_connect(&connection, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);
	char sql[1024];
	string query = "select buyer_items from buyer_list;";

	mysql_query(conn, "set session character_set_connection=euckr;");
	mysql_query(conn, "set session character_set_results=euckr;");
	mysql_query(conn, "set session character_set_client=euckr;");
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		result = mysql_store_result(conn);
		while ((row = mysql_fetch_row(result)) != NULL) {
			list.push_back(row[0]);
		}
		mysql_free_result(result);
	}
	else { // sql 실패
		cerr << "SQL 문 실행에 실패했습니다.";
	}

	return list;
}

int resourceManagement::createNewList(string query) {
	MYSQL* conn, connection;
	MYSQL_RES* result;
	MYSQL_ROW row;

	list<string> list;
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
	strcpy_s(sql, query.c_str());

	if (mysql_query(conn, sql) == 0) {
		return 1;
	}
	return -1;
}