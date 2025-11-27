#include<iostream>
using namespace std;

int main()
{
    int n;
    int s=0;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      s=s+i;
    }
    cout<<"sum of first "<<n<<" numberas is: "<<s;

    return 0;

}   