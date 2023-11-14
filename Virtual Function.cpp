#include<iostream>
using namespace std;
class Base{
    public:
    virtual int display(){
        cout << "Base Class"<<endl;
    }
};
class Derived:public Base{
    public:
    int display(){
        cout << "Derived Class" << endl;
    }
};
int main() {
    Derived d;
    Base *base1 = &d;
    base1->display();
    return 0;
}
