#include<iostream>
using namespace std;

int main(){
    //selection sort
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){   
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        int min_index=i;
        for(int j=i+1;j<m;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}