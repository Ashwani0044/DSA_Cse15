#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	int n;
	int a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    v.push_back(a);
	}
	cout<<"vector: ";
	
	for(auto p:v)
	{
	    cout<<p<<" ";
	}
	cout<<endl;
	cout<<"removing the third element...\n";
// 	v.pop_back();
// 		for(auto p:v)
// 	{
// 	    cout<<p<<" ";
// 	}
    v.erase(v.begin()+2);
		for(auto p:v)
	{
	    cout<<p<<" ";
	}
	
return 0;
}
