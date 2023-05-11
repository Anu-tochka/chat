#include "User.h"
#include "chat.h"
#include <iostream>
#include <fstream>
using namespace std;
	
int main()
{
    
    char e,login,nameTo,pass,name,mess;
    cout << "Введите логин или нажмите + для регистрации нового пользователя"; 
    cin >> e;
    switch (e) { 
      case '+':
		cout << "Введите логин: "; 
		cin >> login;
		cout << "Введите пароль: "; 
		cin >> pass;
		cout << "Введите имя: "; 
		cin >> name;
		User *newuser = new User(login,pass,name);
		newuser->saveUser();
        break;
      default:
		cout << "Введите пароль: "; 
		cin >> pass;
		User *myuser = new User(e,pass);
		cout << "Введите пользователя: "; 
		cin >> nameTo;
		cout << "Введите сообщение: "; 
		cin >> mess;
		myuser->read(myuser); 
		myuser->write(myuser, nameTo, mess); 
        break;
    }
    
	delete myuser;
	delete newuser;
    return 0;
}