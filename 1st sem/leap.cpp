#include<iostream>
using namespace std;

int main()
{
   int y;
   cout<<"enter the year: ";
   cin>> y;
   
   ((y%400==0)||(y%100!=0 && y%4==0))?cout<<"Leap Year":cout<<"Not a Leap Year";

   return 0;
}