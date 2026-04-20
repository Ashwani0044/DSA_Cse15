#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array (sorted in ascending order): ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int left = 0, right = n-1;
    bool found = false;
    while(left <= right){
        int mid = left + (right - left) / 2; // To avoid overflow
        if(arr[mid] == key){
            found = true;
            cout<<"Element found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid] < key){
            left = mid + 1; // Search in the right half
        }
        else{
            right = mid - 1; // Search in the left half
        }
    }
    if(!found){
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}