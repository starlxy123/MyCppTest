#include "../include/Task.h"


Task::Task(const std::string& description): description{description}
{}

Task::Task(const std::string& description, bool isCompleted): description{description}, isCompleted{isCompleted}
{}

std::string Task::getDescription() const
{
    return this->description;
}

void Task::setDescription(const std::string& description)
{
    this->description = description;
}

bool Task::isComplete() const
{
    return this->isCompleted;
}

void Task::setComplete(bool isCompleted)
{
    this->isCompleted = isCompleted;
}