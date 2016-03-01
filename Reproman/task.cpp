#include "task.h"


QDate Task::getStartDate() const
{
    return startDate;
}

void Task::setStartDate(const QDate &value)
{
    startDate = value;
}

QDate Task::getDeadlineDate() const
{
    return deadlineDate;
}

void Task::setDeadlineDate(const QDate &value)
{
    deadlineDate = value;
}

string Task::getTitle() const
{
    return title;
}

void Task::setTitle(const string &value)
{
    title = value;
}

User Task::getAssigned() const
{
    return assigned;
}

void Task::setAssigned(const User &value)
{
    assigned = value;
}
Task::Task()
{

}
