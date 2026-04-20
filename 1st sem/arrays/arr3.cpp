#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the n: ";
    cin >> n;
    int arr[n];
    int brr[n];
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
    
    // for(int i=n-1;i>=0;i--)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
      brr[j]= arr[i];
      j++;
    }
    cout<<"Reversed array: ";
    for(int j=0;j<n;j++)
    {
        cout<<brr[j]<<" ";
    }
    
    return 0;
}
        