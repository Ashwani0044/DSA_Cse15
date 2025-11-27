#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v;
    //c at beg and w at n-3
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char q;
        cin>>q;
        v.push_back(q);
    }
    int cnt=0;
    cout<<"vector: ";
    for(auto p:v)
    {
        cout<<p;
        if(p == 'a')
        {
            cnt++;
        }
    }
    cout<<endl;
    cout<<"frequency of a is: "<<cnt;
    return 0;
}
