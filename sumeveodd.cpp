#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int es=0, os=0;
    for(int i=1;i<=n;i++)
    {
      if(i%2==0) es=es+i;
      else os=os+i;
    }

    cout<<"sum of even numbers: "<<es<<endl;
    cout<<"sum of odd numbers: "<<os<<endl;

 return 0;   
}