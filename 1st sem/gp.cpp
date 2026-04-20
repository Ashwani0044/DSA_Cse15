#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,r,n;
    cout<<"enter the first term, r, and n: ";
    cin>>a>>r>>n;
    cout<<"gp series.."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a*pow(r,i)<<" ";
    }

    return 0;
}