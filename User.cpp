#include "User.h" // Включаем заголовочный файл c описанием класса
#include <fstream>
#include <iostream>

using namespace std;

User::User(const char* name, const char* login, const char* pass)
{
   UserName = name;
   UserLogin = login;
   UserPass = pass;
}

User::~User()
{
}

void User::setName(const char* name) // задаём имя
{
    UserName = name;   
}

void User::getName(const char* name) // 
{
    cout << name;   
}

void User::setLogin(const char* login) // задаём логин
{
    UserLogin = login;   
}

void User::setPass(const char* pass) // задаём пароль
{
    UserPass = pass;   
}

 void saveUser()
{
    fileout = freopen("users.txt", "w", stdout);
	char* login = this -> setLogin;
	char* pass = this -> setPass; 
	char* name = this -> setName; 
	printf("%s\n",login+"|"+pass+"|"+name);
	std::fclose(fileout);
}
