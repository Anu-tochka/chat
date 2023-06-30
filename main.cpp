#include "User.h"
#include "chat.h"
#include <iostream>
#include <fstream>
using namespace std;
	
int main()
{
    char* login,nameTo,pass,name,mess;
    cout << "Введите логин: "; 
	cin >> login;
	cout << "Введите пароль: "; 
	cin >> pass;
	if (findPass(login) == '') {
		cout << "Введите имя: "; 
		cin >> name;
		User *newuser = new User(login,pass,name);
		newuser->saveUser();
	}
	else {
		if (findPass(login) != pass) cout << "Неправильные данные"; 
		else {
			User *myUser = new User(login,pass);
			Chat *myChat = new Chat();
			myChat->read(myuser);
			cout << "Введите имя пользователя: "; 
			cin >> nameTo;
			cout << "Введите сообщение: "; 
			cin >> mess; 
			myChat->write(myuser, nameTo, mess);
		}
    }
    
	delete myuser;
	delete newuser;
    return 0;
}
