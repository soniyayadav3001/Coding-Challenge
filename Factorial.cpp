#include<iostream>
using namespace std;
int main() {
    int num;
    int fact = 1;
    cout << "Enter the number here : " << endl;
    cin >> num;
    for (int i = 1; i <= num;i++){
        fact = fact * i;
    }
    cout << " Factorial of " << num << " is " << fact << endl;
    return 0;
}
