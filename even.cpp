#include <iostream>
using namespace std;
void isEven(int number);

main ()
{
	int num;
while(true)
{
	cout <<"enter the number = ";
	cin >>num;
	isEven (num);
	isOdd (num);
}
}
void isEven(int number)
{
if (number%2 == 0 )
{
cout <<"your number is even";
}
if(number%2 != 0 )
{
cout <<"your number is odd.";
}
}

