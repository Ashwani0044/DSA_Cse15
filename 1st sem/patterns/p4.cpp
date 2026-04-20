     
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=((n/2)*2)-1;
   for(int i=0;i<n;i++)
   {
       for(int l=a;l>=0;l--)
       {
           cout<<" ";
       }
       a--;
       for(int j=0;j<=i;j++)
       {
           cout<<"* ";
       }
       
       cout<<"\n";
   }
}