#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> countsort(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return arr;

    int maxval = 0;
    for(int i = 0; i < n; i++) {
        maxval = max(maxval, arr[i]);
    }

    vector<int> count(maxval + 1, 0);
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for(int i = 1; i <= maxval; i++) {
        count[i] += count[i-1];
    }

    vector<int> ans(n); 

    for(int i = n - 1; i >= 0; i--) {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 5, 3, 0, 2, 3, 0, 3};
    vector<int> ans = countsort(arr);
    for (int x : ans) cout << x << " ";
    return 0;
}
