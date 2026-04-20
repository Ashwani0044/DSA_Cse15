// *   
//   * 
// *   *   
//   *   * 
// *   *   *   
//   *   * 
// *   *   
//   * 
// *   
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;

    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < i / 2; j++)
                cout << "  * ";
        } else {
            for (int j = 0; j < (i / 2) + 1; j++)
                cout << "*   ";
        }
        cout << endl;
    }

    
    for (int i = n - 2; i >= 0; i--) {
        if (i % 2 == 0) {
            for (int j = 0; j < i / 2; j++)
                cout << "  * ";
        } else {
            for (int j = 0; j < (i / 2) + 1; j++)
                cout << "*   ";
        }
        cout << endl;
    }

    return 0;
}
