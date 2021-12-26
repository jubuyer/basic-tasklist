#pragma once;

class Task {
private:
  std::string assignee; //who task is assigned to
  std::string info; //description of task
  std::string deadline; //date to complete task by
public:
  Task();
  Task(std::string inputAssignee, std::string inputInfo, int inputDeadline);
  //getter methods
  std::string getAssignee();
  std::string getInfo();
  std::string getDeadline;
  //modify object
  void changeAssignee(std::string newPerson);
  void updateInfo(std::string newInfo);
  void updateDeadline(std::string newDeadline);
  //creating
  void createTask();
  //printing
  void print();
};
