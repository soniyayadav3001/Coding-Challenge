#include <iostream>
using namespace std;
int add(int a, int b) {
  return a + b;
}
int main() {
  int x, y, z;

  cout << "Enter two numbers: ";
  cin >> x >> y;
  z = add(x, y);
  cout << "The sum of " << x << " and " << y << " is " << z << endl;

  return 0;
}
