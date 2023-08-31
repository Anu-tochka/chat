#include<iostream>
#include<string.h>
#include <mysql.h>
 
using namespace std;
 
void startConnect()  { 
	MYSQL mysql;
	MYSQL_RES* res;
	MYSQL_ROW row;
 
	// Получаем дескриптор соединения
	mysql_init(&mysql);
	if (&mysql == nullptr) {
		// Если дескриптор не получен — выводим сообщение об ошибке
		cout << "Error: can't create MySQL-descriptor" << endl;
	}
 
	// Подключаемся к серверу
	if (!mysql_real_connect(&mysql, "localhost", "root", "root", "chat", NULL, NULL, 0)) {
		// Если нет возможности установить соединение с БД выводим сообщение об ошибке
		cout << "Error: can't connect to database " << mysql_error(&mysql) << endl;
	}
} 
 
int autorisation(string login, string pass)  { 
	mysql_query(&mysql, "SELECT id, name FROM users WHERE login=" + login + " AND pass=" + pass); //Делаем запрос к таблице
	int id;
	if (res = mysql_store_result(&mysql)) {
		row = mysql_fetch_row(res); 
		cout << "Hello, " << row['name'] << "!";
		id = row['id'];
	}
	else {
		cout << "Неправильный логин или пароль";
		id = 0;
	}
} 
 
void messages(int id)  {	
	mysql_query(&mysql, "SELECT * FROM messages WHERE toUser=" + id); //Делаем запрос к таблице
	
	//Выводим все что есть в таблице через цикл
	if (res = mysql_store_result(&mysql)) {
		while (row = mysql_fetch_row(res)) {
			for (int i = 0; i < mysql_num_fields(res); i++) {
				cout << "От " << row['fromUser'] << row['message'];
			}
			cout << endl;
		}
	}
	else
		cout << "Ошибка MySql номер " << mysql_error(&mysql);
} 
 
void closeConnect()  {	 
	// Закрываем соединение с базой данных
	mysql_close(&mysql);
 
}
