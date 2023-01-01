#include<iostream>
using namespace std;
void ifpass(int marks);
main ()
{

int marks;
cout <<"what are your marks= ";
cin >>marks;
if (marks>50)
{
  cout <<"CONGRATS!You have passed your first quiz. ";
}
if (marks == 50)
{
  cout <<"you numbers are 50";
}
if (marks<50)
{
  cout <<"you have failed the quiz :(";
}
}
void ifpass(int marks)
{
  
}