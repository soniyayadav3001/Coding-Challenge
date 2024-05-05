#include<iostream>
using namespace std; 
class A{
    public:
    void greet(){
        cout << "Hello" << endl;
    }
};
class B{
    public:
    void greet(){
        cout << "Namaste" << endl;
    }
};
int main() {
    B obj;
    obj.greet();
    A o;
    o.greet();
    return 0;
}
