#include<iostream>
using namespace std;
class Addition{
    public:
    void sum(int a , int b){
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
    void sum(int a , int b , int c){
        cout << "Sum of " << a << " , " << b <<" and "<< c << " is " << a + b + c << endl;
    }
};
int main() {
    Addition obj;
    obj.sum(5, 9);
    obj.sum(2, 4, 6);
    return 0;
}
