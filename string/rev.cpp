#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string res="";
    for(int i= 0;i<s.length();i++)
    {
        res= s[i]+res;
    }
    cout<<res;

    return 0;
}