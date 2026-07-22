#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node(int v) {
        val = v;
        next = NULL;
        prev = NULL;
    }
};

void doublyll(Node* &head) {
    int v;
    cout << "Enter value: ";
    cin >> v;
    head = new Node(v);
    Node* temp = head;

    cout << "Enter the choice (y/n): ";
    char ch;
    cin >> ch;
    while (ch == 'y') {
        cin >> v;
        Node* m = new Node(v);
        temp->next = m;
        m->prev = temp;
        temp = m;
        cout << "Enter the choice (y/n): ";
        cin >> ch;
    }
}

void traverse_reverse(Node* head) {
    if (head == NULL) return;
    
    Node* temp = head;
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    cout << "Reverse: ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev; 
    }
    cout << endl;
}

int main() {
    Node* head = NULL; 
    doublyll(head);
    traverse_reverse(head);
    return 0;
}
