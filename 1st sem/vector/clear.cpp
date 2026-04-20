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
	cout<<"Removing all the element"<<endl;
    v.clear();
    cout<<"new vector: "; 
		for(auto p:v)
	{
	    cout<<p<<" ";
	}
    cout<<"inserting 12 at third position....\n";
    v.insert(v.begin()+2, 12);
    cout<<"new vector: ";
		for(auto p:v)
	{
	    cout<<p<<" ";
	}
	
return 0;
}
