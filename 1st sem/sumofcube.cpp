#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"enter n: ";
 cin>>n;
 int sum=0;
 for(int i=1;i<=n;i++)
 {
    sum= sum+(i*i*i);
 }
 cout<<"sum of cube of first "<<n<<" natural numbers using for loop is: "<<sum<<endl;

 int a=1, s=0;
 while(a<=n)
 {
    s=s+(a*a*a);
    a++;
 }
 cout<<"sum of cube of first "<<n<<" natural numbers using while loop is: "<<s<<endl;

 int b=1,p=0;
 do{
    p=p+(b*b*b);
    b++;
 }while(b<=n);
 cout<<"sum of cube of first "<<n<<" natural numbers using do-while loop is: "<<p<<endl;

 return 0;
}