#include<iostream>
using namespace std;

int main()
{
    //t= a+(n-1)d
    int a,d,n;
    cout<<"enter first term, difference and the term you have to find: ";
    cin>>a>>d>>n;

    int t= a+(n-1)*d;

    cout<<n<<" term is: "<<t;

    return 0;
}