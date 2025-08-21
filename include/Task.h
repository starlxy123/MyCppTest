#ifndef TASK_H
#define TASK_H

#include <string>
class Task
{
private:
    std::string description;
    bool isCompleted;
public:
    Task(const std::string& description);
    Task(const std::string& description, bool isCompleted);
    
    std::string getDescription() const;
    void setDescription(const std::string& description);
    
    bool isComplete() const;
    void setComplete(bool isCompleted);
};

#endif