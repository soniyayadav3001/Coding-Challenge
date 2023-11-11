#include<iostream>
using namespace std;
class A{
    public:
        int a;
        void setdata(){
            cout << "Enter the value of a here : " << endl;
            cin >> a;
        }
};
class B{
    public:
        int b;
        void getdata(){
            cout << "Enter the value of b here : " << endl;
            cin >> b;
        }
};
class C : public A , public B{
    public:
        int c;
        void display(){
            c = a + b;
            cout << " The sum of " << a << " and " << b << " is " << c << endl;
        }
};
int main() {
        C obj;
        obj.setdata();
        obj.getdata();
        obj.display();
        return 0;
}
