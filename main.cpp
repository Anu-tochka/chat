#include "User.h"
#include "Message.h"
#include "server.cpp"

int main()
{
    startConnect();
	User obj("Nikita","user1","12345");
	User obj2("Anna","user2","qwerty");
	User obj3("Marta","user3","uuu123");
    int id2 = autorisation(obj2->name,obj2->pass);
    messages(id2);
    int id3 = autorisation(obj3->name,obj3->pass);
    messages(id3);
    return 0;
}
