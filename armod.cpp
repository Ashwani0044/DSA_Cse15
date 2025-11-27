#include<iostream>
using namespace std;

void armod(int arr[])
{
    for(int i=0;i<5;i++)
    {
        arr[i]= 2*arr[i];
    }

}

int main()
{
   int n;
   cout<<"enter n: ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"before: ";
   for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"after modification: ";
   armod(arr);
   for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<" ";
   }
}