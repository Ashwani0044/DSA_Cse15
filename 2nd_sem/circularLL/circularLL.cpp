#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v) {
        val = v;
        next = NULL;
    }
};

void createLL(Node* &head) {
    Node* temp = head;
    cout<<"Enter the value:\n";
    char choice = 'y';
    while(choice == 'y') {
        int v;
        cin>>v;
        
        Node* n = new Node(v);
        if (head == nullptr) {
            head = n;      
            temp = head;
        }
        temp->next = n;
        temp = n;
        cout<<"enter your choice:\n";
        cin>>choice;
    }
    temp->next = head;
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp->next != head) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<temp->val<<endl;
}

void insert_beg(Node* &head, int v) {
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    Node* n = new Node(v);
    temp->next = n;
    n->next = head;
    head = n;
}

void insert_end(Node* &head, int v) {
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    Node* n = new Node(v);
    temp->next = n;
    n->next = head;
}

void delete_beg(Node* &head) {
    Node* temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    head = temp->next;
    delete toDelete;
}

void delete_end(Node* &head) {
    Node* temp = head;
    while(temp->next->next != head) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

}

int main() {
    Node* head = NULL;

    createLL(head);
    traverse(head);

    insert_beg(head, 80);
    traverse(head);

    
    insert_end(head, 80);
    traverse(head);

    delete_beg(head);
    traverse(head);

    delete_end(head);
    traverse(head);
}