#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int brr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"first matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>brr[i][j];
        }
    }
    cout<<"second matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   cout<<"Sum of two matrices:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int m[r][c];
    
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=0;
        
        for(int k=0;k<c;k++)
        {
            m[i][j]+= arr[i][k]*brr[k][j];
        }
        }
    }
    cout<<"Multiplication of matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}