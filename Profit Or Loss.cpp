#include <iostream>
using namespace std;

int main()
{
  int cp, sp, profit, loss;

  cout << "Enter the cost price: ";
  cin >> cp;
  cout << "Enter the selling price: ";
  cin >> sp;
 
  if (sp > cp)
  {
    profit = sp - cp;
    cout << "Profit Gained: " << profit;
  }
  else if (cp > sp)
  {
    loss = cp - sp;
    cout << "Loss Incurred: " << loss;
  }
  else
  {
    cout << "Neither profit nor loss" << endl;
  }
  return 0;
}
