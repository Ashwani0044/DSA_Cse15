#include <iostream>
using namespace std;

int front = -1;
int rear = -1;

const int n = 5;

int queue[n];

void enque(int val) {
    
    if(front == -1) {
        front++;
        rear++;
        queue[rear] = val;
    }
    else if(rear >= n-1) {
        cout<<"Queue is overflown\n";
    }
    else {
        rear++;
        queue[rear] = val;
    }
}

void deque() {
    int item;
    if(front <= rear) {
        item = queue[front];
        front++;
        cout<<"Deleted item is: "<<item<<endl;
    } 
    else {
        cout<<"Queue is underflown\n";
        front = -1;
        rear = -1;
    }
}

void display() {
    if(front == -1) {
        cout<<"Queue is empty!!\n";
    } else {
        for(int i=front; i<=rear; i++) {
            cout<<queue[i]<<" ";
        }
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