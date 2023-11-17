#include <iostream>
using namespace std;
int main() {
  float p, t, r;
  cout << "Enter the principal amount: ";
  cin >> p;
  cout << "Enter the time in years: ";
  cin >> t;
  cout << "Enter the rate of interest in percent: ";
  cin >> r;
  float si = (p * t * r) / 100;
  cout << "The simple interest is: " << si << endl;

  return 0;
}
