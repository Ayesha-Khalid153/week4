#include<iostream>
using namespace std;
void ifpass(int marks);
main ()
{
int marks;
 while (true)
{

cout <<"what are your marks= ";
cin >>marks;
ifpass(marks);
}
}
void ifpass(int marks)
{

  if (marks>50)
{
  cout <<"CONGRATS!You have passed your first quiz. "<<endl;
}
if (marks == 50)
{
  cout <<"you numbers are 50"<<endl;
}
if (marks<50)
{
  cout <<"see you in next semester"<<endl;
}
}