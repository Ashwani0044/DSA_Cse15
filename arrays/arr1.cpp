#include<iostream>
using namespace std;

int main()
{
    int n;
    int s=0,a=0;
    int arr[n];
    cout<<"enter the n: ";
    cin >> n;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"even index elements: ";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]<<" ";
        }
       
    }
    cout<<endl;
    cout<<"odd index elements: ";
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
   
    return 0;
}