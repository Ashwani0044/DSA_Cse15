// A 
// B C 
// D E F 
// G H I J 
#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=1;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
     for(int j=i;j<2*i;j++)
     {
         cout<<char(64+a)<<" ";
         a++;
     }
       cout<<endl;
   }
   return 0;
}