#pragma once 

class Chat
{
public:
    Chat();// конструктор
    ~Chat(); // деструктор
    const char *userFrom;
    const char *userTo;
    const char *message;
    void write(char *userFrom, char *userTo, char *message);
    void read(char *name);
};
