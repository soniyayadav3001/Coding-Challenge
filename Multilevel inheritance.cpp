#include<iostream>
using namespace std;
class A{
    public:
        int x,y;
        void setdata(){
            cout << "Enter the value of x : " << endl;
            cin >> x;
            cout << "Enter the value of y : " << endl;
            cin >> y;
        }
};
class B:public A{
    public:
        int z;
        void getdata(){
            z = x * y;
        }
};
class C : public B{
    public:
        void display(){
            cout << "The product of " << x << " and " << y << " is " << z << endl;
        }
};
int main() {
        C obj;
        obj.setdata();
        obj.getdata();
        obj.display();
        return 0;
}
