#include<iostream>

using namespace std;

int main(){

    int s;
    cout<< "ENTER:\n";
    cout<< "Enter 1 to take two integers as input and print their sum.\n";
    cout<< "Enter 2  to take the length and breadth of a rectangle as input and print its area.\n";
    cout<< "Enter 3 to take three numbers as input and print their average.\n";
    cout<< "Enter 4 to take principal, rate, and time as input and calculate and print the simple interest.\n";
    cout<< "Enter 5 to take two numbers as input, swap them without using a third variable, and print the swapped values.\n";
    cin>>s;
switch(s)
{
    case 1:
    int a,b;
    cout<< "enter two numbers :\n";
    cin >> a>>b;
    cout << "Sum of "<<a<<" and "<<b<<" is = "<<a+b;
    break;
    case 2:
    int l,q;
    cout<< "enter length and breadth :\n";
    cin>> l>>q;
    cout<< "Area of rectangle is = "<<l*q;
    break;
    case 3:
     double x,y,z,u;
     cout<< "enter three numbers :\n";
     cin >> x>>y>>z;
     u= (x+y+z)/3;
      cout<< "Average of these three numbers is : "<<u;
      break;
    case 4:
    int p,r,t;
     cout<< "enter the principal, rate, and time: \n";
     cin >> p>>r>>t;
     cout << "SIMPLE INTEREST = "<< (p*r*t)/100;
     break;
    case 5:
     int m,n;
     cout<< "enter two numbers :\n";
     cin>> m>>n;
     m= m+n;
     n=m-n;
     m=m-n;
     cout << "Swapped numbers : \n"<<m<<endl<<n;
     break;
     default:
     cout<< "WRONG CHOICE..TRY AGAIN!!";

}
}

