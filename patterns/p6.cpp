    
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
   int p=0;
   for(int i=(n-2);i>=0;i--)
   {
       for(int z=0;z<=p;z++)
       {
           cout<<" ";
       }
       p++;
       for(int k=i;k>=0;k--)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
       
}