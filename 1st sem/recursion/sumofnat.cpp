#include<iostream>
using namespace std;

//to find sum of natural numbers

int sum(int n)
{
    if(n==0) return 0;
    else
    return n+sum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}