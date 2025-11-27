// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 
#include<iostream>
using namespace std;

int main()
{
    int a=0;
    for(int i=4;i>=0;i--)
    {
        for(int k=0;k<a;k++)
        {
            cout<<"  ";
        }
        a++;
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}