// https://www.youtube.com/watch?v=qq05D2yFIHA&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=23
/**
 * @brief C++ Objects Memory allocation and using arrays in classes
 number 23
 *
 when you make object then memory is assigned to them.
 */
#include <iomanip>
#include <iostream>
#include <string>
#include <system_error>
// use instead of #include<windows.h>
using namespace std;
class Shop {
  int itemId[100];
  int itemPrice[100];
  int counter;

public:
  void initCouncter(void) { counter = 0; }
  void getPrice(void);
  void setPrice(void);
  void displayPrice(void);
};
void Shop::setPrice(void) {
  cout << "Enter ID of your item no" << counter + 1 << endl;
  cin >> itemId[counter];
  cout << "Enter Price of your item" << endl;
  cin >> itemPrice[counter];
  counter++;
}
void Shop::displayPrice(void) {
  for (int i = 0; i < counter; i++) {
    cout << "The price of item with Id" << itemPrice[i] << endl;
  }
}
int main() {
  cout << "HI" << endl;
  Shop dukaan;
  dukaan.initCouncter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();

  return 0;
}