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
	cout<<"Removing last third element"<<endl;
	v.erase(v.end()-3);
		for(auto p:v)
	{
	    cout<<p<<" ";
	}
	
return 0;
}
