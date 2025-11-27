#include<iostream>
using namespace std;

void sum(int arr[], int brr[], int c[], int n)
{
    for(int i=0;i<n;i++)
    {
        c[i]= arr[i]+brr[i];
    }

}
void search(int arr[], int t, int n, bool &flag)
{
   
    for(int i=0;i<n;i++)
    {
       if(arr[i] == t)
       {
         flag= true;
       }
    }
}
void rev(int arr[], int r[], int n)
{
    int j=0;
    for(int i=n-1; i>=0;i--)
    {
        r[j]= arr[i];
        j++;
    }
}
void cntoddeve(int arr[], int n)
{
    int k=0,l=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]%2 == 0)
       {
        k++;
       }
       else
       {
        l++;
       }
    }
       cout<<"even: "<<k<<" odd: "<<l;
    
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    int brr[n];
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    sum(arr,brr,c,n);
    cout<<"sum of arrays: ";
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    bool flag=false;
    cout<<endl;
    search(arr, 5, n, flag);
    if(flag)
    {
        cout<<"present"<<endl;
    }
    else cout<<"not present"<<endl;
    int r[n];
    rev(arr, r, n);
    cout <<"reverse array: ";
    for(int i=0;i<n;i++)
    {
        cout<<r[i]<<" ";

    }
    cout<<endl;
    cntoddeve(arr,n);

 return 0;   
}