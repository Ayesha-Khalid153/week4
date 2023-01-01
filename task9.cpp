#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
 string country;
 int dollars;
 int finalPrice;
while(true)
{
 cout <<"enter the country name= ";
 cin >>country;
 cout <<"enter the amount in dollars= ";
 cin >>dollars;
	if (country == "pakistan")
	{
	  int finalPrice=dollars * 5/100;
	   cout <<"your final price is= ";
	   cout <<finalPrice;
	   cout <<endl;
	}
	if (country == "Ireland")
	{
	 int finalPrice=dollars * 10/100;
	   cout <<"your final price is= ";
	   cout <<finalPrice;
	   cout <<endl;
	}
	if (country == "india")
	{
	 int finalPrice=dollars * 20/100;
	   cout <<"your final price is= ";
	   cout <<finalPrice;
	   cout <<endl;
	}
	if (country == "england")
	{
	 int finalPrice=dollars * 30/100;
	   cout <<"your final price is= ";
	   cout <<finalPrice;
	   cout <<endl;
	}
	if (country == "canada")
	{
	 int finalPrice=dollars * 45/100;
	   cout <<"your final price is= ";
	   cout <<finalPrice;
           cout <<endl;
	}
	Sleep(300);
}
return 0;
}
	
	
	
	