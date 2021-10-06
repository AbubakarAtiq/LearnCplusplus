#include <iomanip>
#include <iostream>
#include <string>
#include <system_error>

// use instead of #include<windows.h>
/**
 * @brief
 * https://www.youtube.com/watch?v=QcLI2zGVYFo&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=24
 *
 static variable is also called as class variable,
 */
using namespace std;
class Employee {

  int id;
  static int count;

public:
  void setData(void) {
    cout << "Enter the id:" << endl;
    cin >> id;
    count++;
  }
  void getData(void) {
    cout << "The ID of this employee is," << id
         << "and this is employee number," << count;
  }
  // static function
  static void getCount(void) {
    // cout<<id;//throws an error
    cout << "The value of count is," << count << endl;
  }
};

int Employee::count;
int main() {
  // count is the static data member of the Employee
  Employee ab, cd, ef;
  // ab.id=1; cannot access because they are private.
  // ab.count=1;
  ab.setData();
  ab.getData();
  Employee::getCount(); // This way you can access function in the class by
                        // using :: without making object
  // Static function only access static variables,etc
  cd.setData();
  cd.getData();
  Employee::getCount();
  ef.setData();
  ef.getData();
  Employee::getCount();
  return 0;
}