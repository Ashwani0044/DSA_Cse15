#include <bits/stdc++.h>
using namespace std;

//count digits using recursion

int count(int n)
{
    if(n<10)
    return 1;
    
    else
    return 1+count(n/10);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<count(n);
    
    return 0;
}