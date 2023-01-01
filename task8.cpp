#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
 string input;
while(true)
{
cout <<"enter name= ";
cin  >>input;
if (input == "true")
{ 
cout <<"false";
cout <<endl;
}
if (input == "false")
{
cout <<"true";
cout <<endl;
}
}
return 0;
}