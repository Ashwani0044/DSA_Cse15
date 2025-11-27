#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=0;
    int num=n;
    while(n>0)
    {
        int r= n%10;
        d=(d*10)+r;
        n=n/10;
    }

   if(num == d) cout<<"valid";
   else cout<<"invalid";

   return 0;
}