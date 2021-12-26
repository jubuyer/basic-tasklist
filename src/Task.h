
class Task () {
private:
  std::string assignee; //who task is assigned to
  std::string info; //description of task
  int deadline; //date to complete task by
public:
  Task();
  Task(std::string inputAssignee, std::string inputInfo, int inputDeadline);
  //getter methods
  std::string getAssignee();
  std::string getInfo();
  int getDeadline;
  //modify object
  void changeAssignee(std::string newPerson);
  void updateInfo(std::string newInfo);
  void updateDeadline(int newDeadline);
};
