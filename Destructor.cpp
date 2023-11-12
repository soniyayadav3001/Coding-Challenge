#include<iostream>
using namespace std;
class A{
   public:
       int x;
       A(){
           cout <<"Enter the value of x : "<<endl ;
           cin >> x;
           cout << "The value of x is " << x << endl;
       }
       ~A(){            //Destructor
       }
};
int main() {
       A();
       return 0;
}
