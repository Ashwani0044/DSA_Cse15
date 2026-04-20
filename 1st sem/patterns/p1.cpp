//       *
//      **
//     ***
//    ****
//   *****
#include<iostream>
using namespace std;

int main()
{
    for(int i=6;i>0;i--)
    {
        for(int j=0;j<6;j++)
        {
            if(j<(i-1))
            {
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
