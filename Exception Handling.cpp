#include<iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    try{
        if(b!=0){
            c = a / b;
            cout << " Division is " << c << endl;
        }
        else{
            throw(b);
        }
    }
    catch(float b){
        cout << "Error! because divided by 0" << endl;
    }
    return 0;
}
