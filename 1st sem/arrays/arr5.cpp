#include<iostream>
#include<math.h>
#include<algorithm>
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
    
    sort(arr, arr+n);
    
    cout<<"second maximum: "<<arr[n-2]<<endl;
    cout<<"second minimum: "<<arr[1];
    return 0;
}
        