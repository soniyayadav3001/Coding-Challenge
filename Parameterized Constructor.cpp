#include<iostream>
using namespace std;
class Complex{
    public:
        Complex(int a , int b){                     //Parameterized Constructor
            cout << " Your Complex number is " << a << "+" << b << "i" << endl;
        }
};
int main() {
        Complex(2,7);
        return 0;
}
