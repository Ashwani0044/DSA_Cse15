#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // s.transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
    cout<<s;
    return 0;
}