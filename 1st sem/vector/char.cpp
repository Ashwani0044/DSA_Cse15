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
    cout<<"vector: ";
    for(auto p:v)
    {
        cout<<p;
    }
    v.insert(v.begin(), 'c');
    v.insert(v.end()-3, 'w');
    cout<<endl;
    cout<<"new vector: ";
    for(auto p:v)
    {
        cout<<p;
    }
    return 0;
}
