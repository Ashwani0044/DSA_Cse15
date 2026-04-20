//    1
//   23
//  345
// 4567
#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=1;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
      for(int s=0;s<(n-i);s++)
      {
          cout<<" ";
      }
      for(int j=i;j<i+a;j++)
      {
        cout<<j; 
      }a++;
       cout<<endl;
   }
   return 0;
}