#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int s= (a+b+c)/2;
   double area= sqrt(s*(s-a)*(s-b)*(s-c));

   cout<<"area is: "<<area;

   return 0;
}