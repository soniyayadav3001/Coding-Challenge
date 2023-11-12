#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(){
        cout << "Enter the value of a : " << endl;
        cin >> a;
    }
    void getdata(){
        cout << "The value of a is : " <<a<< endl;
        
    }
    void operator++(){
        a = a+1;
    }
};
int main() {
    A obj;
    obj.setdata();
    cout<<"Before operator overloading "<<endl;
    obj.getdata();
    ++obj;
    cout<<"After operator overloading "<<endl;
    obj.getdata();
    return 0;
}
