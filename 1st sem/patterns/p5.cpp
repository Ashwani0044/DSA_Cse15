// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
   for(int i=(n-1);i>=0;i--)
   {
       for(int j=0;j<a;j++)
       {
           cout<<" ";
       }
       a++;
       for(int k=0;k<=i;k++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
}