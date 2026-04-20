#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main()
{
    int n;
    int m=INT_MIN;
    int p=INT_MAX;

    cout<<"enter the n: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array: ";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        m= max(m,arr[i]);
    }
    cout<<"Maximum element: "<<m<<endl;
    
    for(int i=0;i<n;i++)
    {
        p= min(p,arr[i]);
    }
    cout<<"Minimum element: "<<p;
    return 0;
}
        