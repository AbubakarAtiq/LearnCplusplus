#include <iomanip>
#include <iostream>
#include <string>
#include <system_error>

// use instead of #include<windows.h>
using namespace std;
class complex {
  int a, b;

public:
  void setData(int v1, int v2) { a = v1, b = v2; }
  void setDataBySum(complex o1, complex o2) {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
  }
  void print_number() {
    cout << "Your complex number is:" << a << "+i" << b << endl;
  }
};
int main() {
  complex c1, c2, c3;
  c1.setData(1, 2);
  c1.print_number();
  c2.setData(3, 4);
  c1.print_number();

  c3.setDataBySum(c1, c2);
  c1.print_number();
  system("echo Githum.com/AbubakarAtiq");
  return 0;
}