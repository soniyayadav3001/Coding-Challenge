#include<iostream>
using namespace std;
union money
{
    int rice;
    int wheat;
};
int main() {
    union money m1;
    m1.rice = 34;
    union money m2;
    m2.wheat = 36;
    cout << "The price of rice is " << m1.rice << endl;
    cout << "The price of wheat is " << m2.wheat << endl;

    return 0;
}
