#include "User.h"
#include "chat.h"
#include <iostream>
#include <fstream>

using namespace std;

Chat::Chat()
{
   
}

Chat::~Chat()
{
}

void write(User userFrom, User userTo, const char *message);// записываем
{
    fileout = freopen("messages.txt", "w", stdout);
	char* nameFrom = userFrom -> getName; 
	char* nameTo = userTo -> getName; 
	printf("%s\n",nameFrom+"|"+nameTo+"|"+message);
	std::fclose(fileout);   
}

void read(User user);// записываем
{
    fileout = freopen("messages.txt", "r", stdout);
	char* name = user -> getName; 
	c = fgetc(fileout);
      std::cout << c;
    } while (c != EOF); // пока не конец файла
 
	std::fclose(fileout);   
}