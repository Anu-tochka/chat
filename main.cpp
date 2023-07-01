#include "User.h"
#include "chat.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
	
int main()
{    
    char* login;
    char* nameTo;
    char* pass;
    char* name;
    char* mess;
    cout << "Введите логин: "; 
    cin >> login;
    cout << "Введите пароль: "; 
    cin >> pass;
    User *myUser = new User(login,pass);
    char *p = myUser->findPass(login);
    if (!p)  {
		cout << "Введите имя: ";
		cin >> name;
	      	myUser->setName(name);
		myUser->saveUser();
	}
	else {
		if (strcmp(p, pass) ) {
                    Chat *myChat = new Chat();
                    char* name = myUser->getName();

			myChat->read(name);
			cout << "Введите имя пользователя: ";
			cin >> nameTo;
			cout << "Введите сообщение: ";
			cin >> mess;
			myChat->write(name, nameTo, mess);
		}
		else  cout << "Неправильные данные";
    }
    
	delete myUser;
    return 0;
}
