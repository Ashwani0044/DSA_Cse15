//selection sort
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //selection sort
    
    for(int i=0;i<n-1;i++) {
        int min=arr[i];
        int loc=i;
        for(int j=i+1;j<n;j++) {
            if(min>arr[j]){
                min=arr[j];
                j=i;
            }
        }
        swap(arr[i],arr[loc]);
    }

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }



    return 0;

}