#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%5==0 && n%11==0) cout<<"divisible";
    else cout<<"not divisible";

    return 0;
}