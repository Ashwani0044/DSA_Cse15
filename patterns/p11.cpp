//       1 
//     2 3 2 
//   3 4 5 4 3 
// 4 5 6 7 6 5 4 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
      for(int s=0;s<(n-i);s++)
      {
          cout<<"  ";
      }
      for(int j=i;j<i+i;j++)
      {
        cout<<j<<" "; 
      }
     
      for(int k=(2*i)-2;k>i-1;k--)
      {
          cout<<k<<" ";
      }
       cout<<endl;
   }
   return 0;
}