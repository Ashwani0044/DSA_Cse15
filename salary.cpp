//to print updated salary after increment
//original 50000 , increment 10000

#include<iostream>
using namespace std;

void sal(int &s, int &inc)
{
    s= s+ inc;
}

int main()
{
    int s= 50000, inc= 10000;
    cout<<"original salary: "<<s<<endl;
    sal(s,inc);
    cout<<"salary after increment: "<<s<<endl;

   return 0; 
}