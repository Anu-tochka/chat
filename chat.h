#pragma once 

class Chat
{
public:
    Chat();// конструктор
 	~Chat(); // деструктор
private:
    const char *userFrom;
    const char *userTo;
    const char *message;
    void write(User userFrom, User userTo, const char *message);
	void read(User user);
};