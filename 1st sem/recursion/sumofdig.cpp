#include<iostream>
using namespace std;

int sumofdigit(int n)
{
    int num=n;
    if(n<10)
    return n;
    
    else
    return (n%10)+sumofdigit(num/10);
}

int main()
{
    int a;
    cin>>a;
    
    cout<<sumofdigit(a);
    
    return 0;
}