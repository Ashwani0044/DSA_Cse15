#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    int sum = 0;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<sum;

    return 0;
}