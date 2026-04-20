#include<iostream>
#include<map>
#include<vector>
#include<climits>
using namespace std;

int max(vector<int>arr, int n)
{
    int maxx= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxx) maxx= arr[i];
    }
    return maxx;
}

int search(vector<int>arr, int n, int t)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]== t)
        {
            return i;
        }
    }
    return -1;
}

vector<int>dup(vector<int>&arr, int n)
{
    map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(freq[arr[i]]>1)
        {
            freq[arr[i]]--;
            arr.erase(arr.begin()+i);
            i--;
        }

    }
    return arr;
}

bool issort(vector<int>arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<"maximum element: "<<max(a,n)<<endl;
    cout<<"element find at index: "<<search(a,n,20)<<endl;
    dup(a,n);
    cout<<"array without duplicate: ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"is sorted: "<<issort(a,n);

    return 0;
}