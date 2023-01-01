#include<iostream>
using namespace std;

void add (int number1, int number2);
void multiply(int num1 , int num2);
void substraction(int num1st , int num2nd);
main()
{
int number1;
int number2;
int operation;
cout <<"enter 1st num = ";
cin>>number1;
cout <<"enter 2nd num = ";
cin>> number2;
cout <<"enter the operation(+ , - , / , * )= ";
cin >>operation;
if (operation == '+')
{
 add ( number1 ,  number2);
}
if(operation == '*')
{
 multiply( number1 ,  number2);
}
if(operation == '-')
{
 substraction(number1, number2);
}
}

void add (int number1 , int number2)
{
int sum;
sum = number1 + number2;
cout <<"the sum =" << sum<<endl;
}
void multiply(int num1 , int num2)
{
int multiply;
multiply = num1 * num2;
cout <<"your product is = "<< multiply<<endl;
}
void substraction(int num1st , int num2nd)
{
int substraction;
substraction = num1st - num2nd;
cout <<"your substraction is = "<<substraction<<endl;
}
