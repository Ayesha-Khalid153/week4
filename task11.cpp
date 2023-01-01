#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
 int PPofRedRose;
 int PPofWhiteRose;
 int PPoftulip;
 int sum;
 int priceAfterDiscount;
 cout <<"enter the price of red roses= ";
 cin >>PPofRedRose;
 cout <<"enter the price of white roses= ";
 cin >>PPofWhiteRose;
 cout <<"enter the price of tulip= ";
 cin >>PPoftulip;
 sum =PPofRedRose +  PPofWhiteRose +  PPoftulip;
 cout << "original price= ";
 cout <<sum<<endl;
 if (sum > 200)
 { 
   priceAfterDiscount= sum*20/100;
   cout << "price after discount= ";
   cout <<priceAfterDiscount;
 }
return 0;
}