#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    cout<<"vector: ";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    sort(vec.begin(), vec.end());
    cout<<"sorted vector: ";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    int max= vec[n-1];
    int min= vec[0];
    int x=1,y=n-2;
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
    while(vec[x]==min)
    {
        x++;
    }
    while(vec[y]==max)
    {
        y--;
    }
    cout<<"second smallest: "<<vec[x]<<endl;
    cout<<"second largest: "<<vec[y];
    return 0;
}
