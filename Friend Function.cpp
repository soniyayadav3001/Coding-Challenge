#include <iostream>
using namespace std;
class Distance {
private:
  int meter;
  // friend function
  friend int addFive(Distance);

public:
  Distance(int m) {
    meter = m;
  }

  void display() {
    cout << "Distance: " << meter << " meter" << endl;
  }
};
// friend function
int addFive(Distance d) {
  return d.meter + 5;
}
int main() {
  Distance d1(10);
  // call friend function
  int newDistance = addFive(d1);

  cout << "Old distance: ";
  d1.display();

  cout << "New distance after adding 5 meter: ";
  Distance d2(newDistance);
  d2.display();

  return 0;
}
