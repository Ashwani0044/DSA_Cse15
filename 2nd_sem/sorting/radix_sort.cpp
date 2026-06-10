//radix sort
#include<bits/stdc++.h>
using namespace std;

void count_sort(int (&A)[], int n, int p) {
    int count[10] = {0};
    int B[n];
    for(int i=0;i<n;i++) {
        count[(A[i]/p)%10]++;
    }

    for(int i=1;i<10;i++) {
        count[i] += count[i-1];
    }

    for(int i=n-1;i>=0;i--) {
        B[count[(A[i]/p)%10]-1] = A[i];
        count[(A[i]/p)%10]--;
    }

    for(int i=0;i<n;i++) {
        A[i] = B[i];
    }
}

int main() {
    int n;
    cin>>n;
    int A[n];
    int max_dig = INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>A[i];
        max_dig = max(max_dig, A[i]);
    }
    

    for(int i=1; max_dig/i > 0 ; i*=10) {

        count_sort(A, n, i);
    }

    for(int i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }


}

// first find the maximum digit in the array to get the number of times we have to iterate (= no. of digit in maximum number)
// make a count array (0-9) and a array B
// then count the frequency of the digit in the array by count[(A[i]/p)%10]++
// then make it a prefix sum array (the count array)
// then traverse from n-1 to 0 -> B[count[(A[i]/p)%10]-1] = A[i] and count[(A[i]/p)%10]--
// then assign B to A