#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key, int count[]){
    int count[n] = {0}; // To count occurrences of each element

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            count[i]++;
            return i; 
        }
    }
    return -1; 
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int count[n] = {0}; // To count occurrences of each element
    // bool found = false;
    // for(int i=0; i<n; i++){
    //     if(arr[i] == key){
    //         found = true;
    //         cout<<"Element found at index: "<<i<<endl;
    //         break;
    //     }
    // }
    // if(!found){
    //     cout<<"Element not found in the array."<<endl;
    // }
    int index = linear_search(arr, n, key, count);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}