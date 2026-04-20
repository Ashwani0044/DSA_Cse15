#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int v){//constructor to initialize
        val=v;
        next= NULL;
    }

};

void insertAtHead(Node* &head, int val){
    Node* n= new Node(val);
    n->next= head;
    head=n;
}

void insertAtTail(Node* &head, int val){
    Node* n= new Node(val);
    if(head==nullptr){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next=n;
}
bool search(Node* &head,int key){
     Node* temp = head;
    while (temp != nullptr) {
        if (temp->val == key) return true; // Found
        temp = temp->next;
    }
    return false; // Not found
}
void deleteNode(Node* &head, int v){
    //check on head 
    if(head->val == v){
        Node* toDelete=head;
        head= head->next;
        delete toDelete;
        return;
    }
    Node* temp=head;
    while(temp->next->val != v && temp->next != NULL){
        temp= temp->next;
    }
    Node* toDelete= temp->next;
    temp->next= temp->next->next;
    delete toDelete;
}

void insertAtPosition(Node* &head,int pos, int v){
    if(pos==0){
        insertAtHead(head, v);
        return;
    }
    Node* n= new Node(v);
    Node* temp=head;
    for(int i=0;i<pos-1 && temp!=nullptr;i++){
        temp=temp->next;
    }
    if(temp==NULL){ cout<<"out of range\n"; return;}
    n->next= temp->next;
    temp->next= n;
}

void reverse(Node* &head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextt = nullptr;

    while(curr != NULL) {
        nextt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextt;
    }
    head = prev;
}

void deleteAtHead(Node* &head) {
    if(head == NULL) return;
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteAtEnd(Node* &head) {
    if(head == NULL) return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteAtPosition(Node* &head, int pos) {
    if(head == NULL) return;
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp->next!=NULL;i++) {
        temp = temp->next;
    }

    if(temp->next == NULL) return;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;

}

void display(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head= nullptr;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtHead(head, 5);
    display(head);
    cout<<endl;
    insertAtPosition(head, 2, 7);
    display(head);
    cout<<endl;
    reverse(head);
    display(head);
    cout<<endl;
    deleteAtHead(head);
    display(head);
    cout<<endl;
    deleteAtEnd(head);
    display(head);
    cout<<endl;
    deleteAtPosition(head, 2);
    display(head);
}