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
    // fileout = freopen("users.txt", "w", stdout);
    ifstream file ("users.txt");
	char* login = this -> setLogin;
	char* pass = this -> setPass; 
	char* name = this -> setName; 
	printf("%s|%s|%s\n",login,pass,name);
	std::fclose(fileout);
}

char* findPass(char* login)
{
    // fileout = freopen("users.txt", "r", stdout);
    ifstream file ("users.txt");
    smallint n = strlen(login);
    char* buffer;
    char* pass = '';
    while (!feof(file)) {
        //Читаем строку
        file.getline(buffer,255,'\n');
        char userInf[3]];
        userInf =strtok(buffer, "|");; 
        if (!strcmp(login, userInf[0]) { 
            pass = userInf[1];
            break;
        }
    }
	return pass;
}
