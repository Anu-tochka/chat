#include "User.h" // Включаем заголовочный файл c описанием класса
#include <fstream>
#include <stdio.h>
#include <iostream>

using namespace std;

User::User(const char* login, const char* pass)
{
   char* UserLogin = login;
   char* UserPass = pass;
}

User::~User()
{
}

void User::setName(char* name) // задаём имя
{
    char* UserName = name;
}

char* User::getName() //
{
    return this->UserName;
}

void User::setLogin(char* login) // задаём логин
{
    this->UserLogin = login;
}
 
char* User::getLogin() //
{
    return this->UserLogin;
}

void User::setPass(char* pass) // задаём пароль
{
    this->UserPass = pass;
}

void User::saveUser()
{
     fileout = freopen("users.txt", "w", stdout);
	char* login = this -> setLogin;
	char* pass = this -> setPass;
	char* name = this -> setName;
	printf("%s|%s|%s\n",login,pass,name);
	std::fclose(fileout);
}

char* User::findPass(char* login)
{
     fileout = freopen("users.txt", "r", stdout);
    smallint n = strlen(login);
    char* buffer;
    char* pass = '';
    while (!feof(fileout)) {
        //Читаем строку
        file.getline(buffer,255,'\n');
        char userInf[0]];
        userInf =strtok(buffer, "|");;
        if (!strcmp(login, userInf[0]) {
            pass = userInf[1];
            break;
        }
    }
	std::fclose(fileout);
	return pass;
}
