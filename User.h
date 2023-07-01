#pragma once 

class User
{
public:
    User(const char* login, const char* pass);// конструктор
    ~User(); // деструктор
   void setName(char* name);
    char* getName();
    void setLogin(char* login);
    void setPass(char* pass);
    char* getLogin();
    char* findPass(char* login);
    void saveUser();
};
