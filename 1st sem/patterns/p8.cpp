// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++) cout << " ";
        for (int j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s < i; s++) cout << " ";
        for (int j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}