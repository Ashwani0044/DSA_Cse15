#include<iostream>
using namespace std;

int main()
{

    cout<<"using while loop"<<endl;
    int i=1;
    while(i<=5)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    cout<<"using do-while loop"<<endl;
    int a=1;
    do{
        cout<<a<<" ";
        a++;
    }while(a<=5);
    cout<<endl;
    cout<<"using for loop"<<endl;
    for(int j=1;j<=5;j++)
    {
        cout<<j<<" ";
    }

    return 0;
}