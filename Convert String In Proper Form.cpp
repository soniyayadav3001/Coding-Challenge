#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  str[0] = toupper(str[0]);

  for (int i = 1; i < str.length(); i++) {
    if (str[i - 1] == ' ') {
      str[i] = toupper(str[i]);
    }
  }

  cout << "The string in proper case is: " << str << endl;

  return 0;
}
