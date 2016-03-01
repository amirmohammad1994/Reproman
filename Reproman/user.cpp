#include "user.h"


string User::getName() const
{
    return name;
}

void User::setName(const string &value)
{
    name = value;
}
User::User()
{
}
