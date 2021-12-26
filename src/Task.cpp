#include <iostream>

#include "Task.h"

Task::Task() {
  assignee = "N/A";
  info = "N/A";
  deadline = "the end of time";
}

Task::Task(std::string inputAssignee, std::string inputInfo, int inputDeadline) {
  assignee = inputAssignee;
  info = inputInfo;
  deadline = inputDeadline;
}
