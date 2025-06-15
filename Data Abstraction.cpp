#include<iostream>
using namespace std;
class sum{ 
  int num_1, num_2, total;
  public:
  int getdata(){
    cout << "Enter the value of num_1 : ";
    cin >> num_1;
    cout << "Enter the value of num_2 : ";
    cin >> num_2;
  }
  int display(){
    cout << "Value of num_1 is : "<<num_1<<endl;
    cout << "Value of num_2 is : "<<num_2<<endl;
  }
  int add(){
    total = num_1 + num_2;
    cout << "Total is " << total;
  }
};
int main() {
  sum obj;
  obj.getdata();
  obj.display();
  obj.add();
  return 0;
}
