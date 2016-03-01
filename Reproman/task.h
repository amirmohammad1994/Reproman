#ifndef TASK_H
#define TASK_H

#include <qdatetime.h>
#include "user.h"

class Task
{
private:
    QDate deadlineDate;
    QDate startDate;
    string title;
    User assigned;
public:
    Task();

    QDate getStartDate() const;
    void setStartDate(const QDate &value);
    QDate getDeadlineDate() const;
    void setDeadlineDate(const QDate &value);
    string getTitle() const;
    void setTitle(const string &value);
    User getAssigned() const;
    void setAssigned(const User &value);
};

#endif // TASK_H
