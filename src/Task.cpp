#include <iostream>
#include <cctype>

#include "task.h"

Task::Task() {
  assignee = "N/A";
  info = "N/A";
  deadline = "the end of time";
}

Task::Task(std::string inputAssignee, std::string inputInfo, std::string inputDeadline) {
  assignee = inputAssignee;
  info = inputInfo;
  deadline = inputDeadline;
}

void createTask() {
  std::string assigned, description, due;
  std::cout << "Task assigned to: ";
  std::getline(std::cin, assigned);
  while(assigned == "") {
    std::cout << "Please enter an alphanumeric name: ";
    std::getline(std::cin, assigned);
  }
  std::cout << "Task description: ";
  std::getline(std::cin, description);
  while(description == "") {
    std::cout << "Please enter a description: ";
    std::getline(std::cin, assigned);
  }
  std::cout << "Task due by: ";
  std::getline(std::cin, due);
  while(deadline == "") {
    std::cout << "Please enter an alphanumeric name: ";
    std::getline(std::cin, due);
  }

  Task new(assigned,description,due);
}

std::string getAssignee() {
  return assignee;
}

std::string getInfo() {
  return info;
}

std::string getDeadline {
  return deadline;
}

void changeAssignee(std::string newPerson) {
  assignee = newPerson;
}

void updateInfo(std::string newInfo) {
  info = newInfo;
}

void updateDeadline(std::string newDeadline) {
  deadline = newDeadline;
}
