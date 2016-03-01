#include "project.h"


string Project::getDescription() const
{
    return description;
}

void Project::setDescription(const string &value)
{
    description = value;
}

string Project::getName() const
{
    return name;
}

void Project::setName(const string &value)
{
    name = value;
}
Project::Project()
{
}
