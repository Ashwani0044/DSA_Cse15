#include <iostream>
using namespace std;

// circular queue implementation using array

int front = -1;
int rear = -1;

const int n = 5;

int queue[n];

void enque(int val) {

    if(front == (rear+1)%n) {
        cout<<"OVERFLOWN!!\n";
    } else if(front == -1) {
        front++;
        rear++;
        queue[rear%n] = val;
    } else {
        rear++;
        queue[rear%n] = val;
    }
}

void deque() {
    if(front == -1) {
        cout<<"UNDERFLOWN!!\n";
    } else if(front == rear) {
        cout<<"Deleted item is: "<<queue[front%n]<<endl;
        front = -1;
        rear = -1;
    } else {
        cout<<"Deleted item is: "<<queue[front%n]<<endl;
        front++;
    }
}

void display() {
    if(front == -1) {
        cout<<"Queue is empty!!\n";
    } 
    else {
        int i = front;
        while(i != rear) {
            cout<<queue[i%n]<<" ";
            i++;
        }
        cout<<queue[rear%n];
    }
}

   


int main() {

    cout<<"1 for insertion, 2 for deletion and 3 for display and 4 for exit!!\n";
    int choice;
    do {
       
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter the value: ";
                int v;
                cin>>v;
                enque(v);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                cout<<endl;
                break;
            case 4:
                cout<<"EXIT!!\n";
                break;
            default:
                cout<<"WRONG CHOICE!\n";
        }
    } while(choice != 4);

    return 0;

}