#ifndef USER_H
#define USER_H

class User
{
private:
    string name;

public:
    User();
    string getName() const;
    void setName(const string &value);
};

#endif // USER_H
