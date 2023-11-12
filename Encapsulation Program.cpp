#include<iostream>
using namespace std;
class Company{
    float salary;
    public:
    void setdata(float f_salary,float o_salary){
        salary = f_salary + o_salary;
    }
    void getdata(){
        cout << "Total salary is : " << salary << endl;
    }
};
int main() {
    Company obj;
    obj.setdata(60000, 30000);
    obj.getdata();
    return 0;
}
