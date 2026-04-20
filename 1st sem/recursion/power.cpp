#include <bits/stdc++.h>
using namespace std;

//power of the number using recursion

int power(int n, int p)
{
    if(p==1)
    return n;
    else
    return n*power(n,p-1);
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    
    return 0;
}