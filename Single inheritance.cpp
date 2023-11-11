#include<iostream>
using namespace std;
class Student{
public:
    int roll_no;
void setdata(){
    cout << "Enter the roll number here : " << endl;
    cin >> roll_no;
}
public:
    float sub1, sub2, sub3;
void getdata(){
    cout << "Enter the marks of sub1 : " << endl;
    cin >> sub1;
    cout << "Enter the marks of sub2 : " << endl;
    cin >> sub2;
    cout << "Enter the marks of sub3 : " << endl;
    cin >> sub3;
}
};
class Result:public Student{
float m;
public:
    float marks(){
    m = ((sub1 +sub2 + sub3) / 3);
    cout << " Total marks will be : " << m << endl;
    }
};
int main() {
    Result r;
    r.setdata();
    r.getdata();
    r.marks();
    return 0;
}
