#include "User.h" // Включаем заголовочный файл c описанием класса

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

void User::setName(const char* name) // задаём название
{
    UserName = name;   
}

void User::setLogin(const char* login) // задаём логин
{
    UserLogin = login;   
}

void User::setPass(const char* pass) // задаём пароль
{
    UserPass = pass;   
}

