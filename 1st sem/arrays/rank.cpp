#include<iostream>
using namespace std;

int main()
{
    int n;
    // cout<<"enter n: ";
    cin>>n;
    int arr[n];
    int rank[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // 12 8 9 3 4 (index 0 1 2 3 4)
    // 5 3 4 1 2 
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=arr[i]) cnt++;
        }
        rank[i]= cnt;
    }
    cout<<"rank: ";
    for(int i=0;i<n;i++)
    {
        cout<<rank[i]<<" ";
    }

    return 0;
}