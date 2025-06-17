#include <iostream>
using namespace std;
int main()
{ 
  int order;
  cout << "*********************WELCOME TO CANTEEN**********************";
  cout << "\n1. MOMOS    Rs.50";
  cout << "\n2. DOSA     Rs.85";
  cout << "\n3. NOODLES  Rs.60";
  cout << "\n4. SAMOSA   Rs.12";
  cout << "\n5. COFFEE   Rs.18";
  cout << "\n6. exit";
  while (order != 6)
  {
    cout << "\nEnter your order:";
    cin >> order;
    switch (order)
    {
    case 1:
      cout << "Your order is momos....";
      cout << "\nPlease wait for 2 min";
      break;
    case 2:
      cout << "Your order is dosa....";
      cout << "\nPlease wait for 2 min";
      break;
    case 3:
      cout << "Your order is noodles....";
      cout << "\nPlease wait for 2 min";
      break;
    case 4:
      cout << "Your order is samosa....";
      cout << "\nPlease wait for 2 min";
      break;
    case 5:
      cout << "Your order is coffee....";
      cout << "\nPlease wait for 2 min";
      break;
    default:
      cout << "thank you ^_^";
    }
  }
  return 0;
}
