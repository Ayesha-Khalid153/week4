#include <iostream>
using namespace std;
void totalAmount (string day , float amount);
 main ()
{
  string day;
  float amount;
while(true)
{
  cout <<"enter the day= ";
  cin >> day;
  cout << "Enter Purchase Amount ; "<< endl;
  cin >> amount;
  totalAmount( day, amount);
}
return 0;
}
void totalAmount(string day , float amount)
{
  if (day == "sunday")
{
   amount = amount- (amount*0.1);
   cout << "Payable amount after discount : " << amount << endl;
}
if (day != "sunday")
{
   amount = amount;
   cout << "Payable amount after discount : " << amount << endl;
}
}
