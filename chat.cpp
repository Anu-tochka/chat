#include "User.h"
#include "chat.h"
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

Chat::Chat()
{
   
}

Chat::~Chat()
{
}

void write(char *userFrom, char *userTo, char *message);// записываем
{
    fileout = freopen("messages.txt", "w", stdout);
    printf("%s|%s|%s\n",nameFrom,nameTo,message);
    std::fclose(fileout);  
}

void read(char *name);// записываем
{
    fileout = freopen("messages.txt", "r", stdout);
    char* mess = '';
    while (!feof(fileout)) {
        fileout.getline(buffer,255,'\n');
        char userInf[0]];
        userInf =strtok(buffer, "|");;
        if (!strcmp(name, userInf[1]) {
            mess = userInf[2];

        }
      std::cout << mess;
    } // пока не конец файла
 
	std::fclose(fileout);   
}
