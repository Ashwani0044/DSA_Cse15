#include <iostream>
using namespace std;

struct Node {
    int coeff, expo;
    Node* next;

    Node(int c, int e) {
        coeff = c;
        expo = e;
        next = NULL;
    }
};


Node* create_polygon() {
    int c,e;
    cout<<"enter c and e\n";
    cin>>c>>e;
    Node *ptr, *head, *nptr;
    ptr = new Node(c,e);
    head = ptr;

    char ch;
    cout<<"enter your choice(y/n)\n";
    cin>>ch;
    while(ch == 'y') {
        cin>>c>>e;
        nptr = new Node(c,e);
        ptr->next = nptr;
        ptr = nptr;
        cout<<"enter your choice(y/n)\n";
        cin>>ch;
    }
    return head;

}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp->next != NULL) {
        cout<<temp->coeff<<"x^"<<temp->expo<<"+";
        temp = temp->next;
    }
    cout<<temp->coeff<<"x^"<<temp->expo<<endl;
}

int main() {
    Node* head;
    head = create_polygon();
    traverse(head);
}