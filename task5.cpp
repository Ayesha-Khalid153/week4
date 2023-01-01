#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
gotoxy(1,2);
 cout <<" ********* *********  ********* **      **  ********* ";
gotoxy (1,3);
 cout <<" *       *     *      *         **      **  *       * ";
gotoxy (1,4);
 cout <<" *       *     *      *         **      **  *       * ";
gotoxy (1,5);
 cout <<" *       *     *      *         **      **  *       * ";
gotoxy(1,6);
 cout <<" *********     *      ********* **********  ********* ";
gotoxy(1,7);
 cout <<" *       *     *              * **      **  *       * ";
gotoxy(1,8);      
 cout <<" *       *     *              * **      **  *       * ";
gotoxy(1,9);      
 cout <<" *       * *********  ********* **      **  *       * ";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
