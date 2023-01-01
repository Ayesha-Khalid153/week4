#include<iostream>
#include<windows.h>
using namespace std;
void solution(int differenceFromNorm, int differenceFromNorm1, int TimeForGames);
int main()
{
 int holidays;
 int workingDays;
 int TimeForGames;
 int differenceFromNorm;
 int differenceFromNorm1;
while(true)
{	
cout <<"enter the holidays= ";
cin  >>holidays;
workingDays= 365 - holidays;
TimeForGames = (workingDays * 63 ) + (holidays *127);
differenceFromNorm= 30000 - TimeForGames;
differenceFromNorm1=TimeForGames - 30000;
solution(differenceFromNorm, differenceFromNorm1,TimeForGames);
}
return 0;
}
void solution(int differenceFromNorm,int differenceFromNorm1,int TimeForGames)
{
	if (TimeForGames < 30000)
	{
         cout <<"tom will sleep well " << endl;
         cout << "time in minutes= "<< differenceFromNorm <<endl;
	 cout << "time= " <<differenceFromNorm / 60 << "hours and " <<differenceFromNorm%60 <<"minutes " <<endl;
	}
	if (TimeForGames >  30000)
	{
         cout <<"tom will run away " <<endl;
	cout <<"time in minutes= " << differenceFromNorm1 << endl;
	cout <<"time= " <<differenceFromNorm1 / 60 <<" hoursand " <<differenceFromNorm1%60 <<"minutes" <<endl;
	}

}