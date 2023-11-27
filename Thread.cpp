#include<iostream>
#include<thread>
using namespace std;
int function1(){
  for (int i = 0; i <= 5;i++){
    cout << "A";
  }
}
int function2(){
  for (int i = 0; i <= 5;i++){
    cout << "B";
  }
}
int main() {
  thread t1(function1);
  thread t2(function2);
  t1.join();
  t2.join();
  return 0;
}
