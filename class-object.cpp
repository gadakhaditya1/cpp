#include <iostream>
#include <string>

using namespace std;

class Teacher
{
public:
  // properties and attibutes
  string name;
  string dept;
  string subject;
  double salary;

  void changeDept(string newDept)
  {
    dept = newDept;
  }
};
int main()
{
  Teacher t1;
  t1.name = "Aditya";
  t1.subject = "c++";
  cout << t1.subject << endl;
  return 0;
}
