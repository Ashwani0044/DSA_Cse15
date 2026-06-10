#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<float>& bucket) {

    for(int i = 1; i < bucket.size(); i++) {
        float key = bucket[i];
        int j = i-1;
        while(j >= 0 && bucket[j] > key) {
            bucket[j+1] = bucket[j];
            j--;
        }
        bucket[j+1] = key;
    }
}

void bucketSort(float arr[], int n) {
    
    vector<float> b[n];

    for(int i = 0; i < n; i++) {
        int b_idx = n * arr[i];
        b[b_idx].push_back(arr[i]);
    }

    for(int i = 0; i < n; i++) {
        insertionSort(b[i]);
    }

    int idx = 0;
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<b[i].size() ; j++) {
            arr[idx++] = b[i][j];
        }
    }

}

int main() {

    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}