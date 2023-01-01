200
#include <iostream>
using namespace std;
void totalAmount (string day , int amount);
 main ()
{

	string theDay;
	int totalPrice;
while(true)
{
	cout <<"enter the name of the day...";
	cin  >>theDay;
	cout <<"enter the total price = ";
	cin >>totalPrice;
	totalAmount (theDay , totalPrice );
}
}
void totalAmount (string day , int amount)
{
	
	int per;
	int total;
	per= (amount * 10)/100;
	cout <<"the pecentage = " << per<<endl;
	total= amount * per;
	cout <<"total amount after disscount is= " << total<<endl;
}
	