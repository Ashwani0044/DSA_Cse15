#include<iostream>
using namespace std;

int main(){
    //insertion sort
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // whole process of insertion sort
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--; 
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
}

//dry run with an example:
// input: 5 
// array elements: 12 11 13 5 6 