#include <iostream>
using namespace std;

int top = -1;
int n = 5;

void push(int val, int(&arr)[]) {
    if(top >= n-1) cout<<"stack is overflown\n";
    else {
        top++;
        arr[top] = val;
        cout<<val<<" is pushed in the stack\n";
    }
}

void pop(int(&arr)[]) {
    if(top == -1) cout<<"stack is underflown\n";
    else {
        cout<<"element "<<arr[top]<<" is popped\n";
        top--;
    }
}

void display(int(&arr)[]) {
    if(top == -1) cout<<"stack is empty\n";
    else {
        for(int i=top; i>=0; i--) {
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    int arr[n];
    push(10, arr);
    push(20, arr);
    push(30, arr);
    push(40, arr);
    push(50, arr);

    display(arr);
    cout<<endl;
    
    pop(arr);
    pop(arr);
    pop(arr);
    pop(arr);
    pop(arr);

    display(arr);

    return 0;

}