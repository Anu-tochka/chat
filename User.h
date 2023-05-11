#pragma once 

class User
{
public:
    User(const char* UserName, const char* UserName, const char* UserName);// конструктор
 	~User(); // деструктор
    void setName(const char* name);
    void setUserLogin(const char* login);
    void setUserPass(const char* pass);
private:
    const char *UserName;
    const char *setUserLogin;
    const char *setUserPass;
};