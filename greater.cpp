#include <iostream>
using namespace std;
void greaterNumber(int firstNumber , int secondNumber);
main ()
{

	int number1;
	int number2;
while(true)
{
	cout <<"enter the number 1: " ;
	cin  >>number1;
	cout <<"enter the number 2: " ;
	cin  >>number2;
	greaterNumber(number1 , number2);
}
}

void greaterNumber(int firstNumber , int secondNumber)
{
	if(firstNumber > secondNumber)
{
	cout <<"first number is greater";
}
	if(secondNumber > firstNumber)
{
	cout <<"second number is greater";
}
}