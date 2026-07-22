#include <iostream>
using namespace std;

int main() {
    int hashTable[10];

    for(int i = 0; i < 10; i++)
        hashTable[i] = -1;

    int arr[] = {23, 43, 13, 27};

    for(int i = 0; i < 4; i++) {
        int key = arr[i] % 10;

        while(hashTable[key] != -1) {
            key = (key + 1) % 10;
        }

        hashTable[key] = arr[i];
    }

    cout << "Hash Table:\n";
    for(int i = 0; i < 10; i++) {
        cout << i << " -> " << hashTable[i] << endl;
    }

    return 0;
}