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
    cout<<"Array: ";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
  
    for(int i=0;i<n;i++)
    {
        if((i%2) ==0)
        {
            s=s+arr[i];
        }
       
    }
    cout<<"sum of even index elements: "<<s<<endl;
    
   
    for(int i=0;i<n;i++)
    {
        if((i%2)!=0)
        {
            a=a+arr[i];
        }
    }
    cout<<"sum of odd index elements: "<<a<<endl;
   
    return 0;
}