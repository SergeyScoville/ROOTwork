#include <iostream>
#include <string>
#include <sstream>

int loops();

using namespace std;
const char line = '\n';

int main() {
  string mystr;
  float price;
  int quantity;
  
  cout << "Enter price: ";
  getline (cin, mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin, mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}

int loops() {
  return 0:
}
