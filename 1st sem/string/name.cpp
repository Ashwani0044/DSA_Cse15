#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     char arr[]= "Ashwani Bhardwaj";
//     cout<<arr<<endl;
//     // for(int i=0;i<sizeof(arr);i++)
//     // {
//     //     cout<<arr[i];
//     // }
//     // return 0;
//     string name1= "Ashwani";
//     cout<<name1<<endl;

//     arr[4]='z';
//     cout<<arr<<endl;
//     return 0;

// }
int main()
{
    string name;
    cout<<"enter your name: ";
    getline(cin,name,' ');
    cout<<"your name is: "<<name<<"\nname ki length:  "<<name.length()<<endl;
    return 0;
}
// ignore() is used to clear unwanted characters(usually the leftover new line from the input buffer))