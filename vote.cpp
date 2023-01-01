#include<iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
while(true)
{
cout <<"enter your age = ";
 cin >>age;
 if (age>18)
{
	cout <<"you are eligible to vote" ;
}
if (age < 18)
{
	cout <<"you are not eligible";
}
}
}
 void isEligible(int age)
{ 
 cout <<"your age = ";
 cin >>age;
}
