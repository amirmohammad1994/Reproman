#ifndef PROJECT_H
#define PROJECT_H

class Project
{
private:
    string name;
    string description;

public:
    Project();

    string getDescription() const;
    void setDescription(const string &value);
    string getName() const;
    void setName(const string &value);

};

#endif // PROJECT_H
