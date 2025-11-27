#include<iostream>
#include<vector>
using namespace std;

void swapbyreference(int &a, int &b)
{
    int temp;
    temp= a;
    a= b;
    b= temp;
   
}

void swapbyvalue(int c, int d)
{
    c=c+d;
    d=c-d;
    c=c-d;
    cout<<"after swap: "<<c<<" "<<d<<endl;
}
int main()
{
    int a=10;
    int b=20;
    cout<<"call by reference"<<endl;
    cout<<"before swap: "<<a<<" "<<b<<endl;
    swapbyreference(a,b);
    cout<<"after swap: "<<a<<" "<<b<<endl<<endl;
    cout<<"call by value\n";
    int c= 30,d=40;
    cout<<"before swap: "<<c<<" "<<d<<endl;
    swapbyvalue(c,d);
    
    
    return 0;
}
