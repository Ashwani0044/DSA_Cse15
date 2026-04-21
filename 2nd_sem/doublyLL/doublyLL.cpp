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

void insert_beg(Node* &head, int val) {
    if(!head) {
        head = new Node(val);
        return;
    }

    Node* n = new Node(val);
    n->next = head;
    n->next->prev = n;
    head = n;

}

void insert_end(Node* &head, int val) {
    if(!head) {
        head = new Node(val);
        return;
    }

    if(!head->next) {
        head->next = new Node(val);
        head->next->prev = head;
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;

}

void delete_beg(Node* &head) {
    if(!head) return;
    Node* temp = head;
    Node* isDelete = temp;
    head = temp->next;
    head->prev = NULL;
    delete isDelete;
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp->next != NULL) {
        cout<<temp->val<<"<->";
        temp = temp->next;
    }
    cout<<temp->val<<endl;
}

int main() {
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

   
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;

    traverse(head);
    insert_beg(head, 80);
    traverse(head);
    insert_end(head, 80);
    traverse(head);
    delete_beg(head);
    traverse(head);

    return 0;
}