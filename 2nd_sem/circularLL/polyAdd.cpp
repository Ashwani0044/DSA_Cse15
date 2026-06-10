// adding two polynomials using linked list..

# include <iostream>
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
    int c, e;
    cout<<"enter c and e\n";
    cin>>c>>e;
    Node *ptr, *head, *nptr;
    ptr = new Node(c,e);    
    head = ptr;
    char choice;
    cout<<"enter your choice(y/n)\n";   
    cin>>choice;
    while(choice == 'y') {
        cin>>c>>e;
        nptr = new Node(c,e);
        ptr->next = nptr;
        ptr = nptr;
        cout<<"enter your choice(y/n)\n";
        cin>>choice;
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

void add_polynomial(Node* &head1, Node* &head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* head3 = NULL;
    Node* ptr3 = NULL;

    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->expo > temp2->expo) {
            if(head3 == NULL) {
                head3 = new Node(temp1->coeff, temp1->expo);
                ptr3 = head3;
            } else {
                ptr3->next = new Node(temp1->coeff, temp1->expo);
                ptr3 = ptr3->next;
            }
            temp1 = temp1->next;
        } else if(temp1->expo < temp2->expo) {
            if(head3 == NULL) {
                head3 = new Node(temp2->coeff, temp2->expo);
                ptr3 = head3;
            } else {
                ptr3->next = new Node(temp2->coeff, temp2->expo);
                ptr3 = ptr3->next;
            }
            temp2 = temp2->next;
        } else {
            int sum_coeff = temp1->coeff + temp2->coeff;
            if(sum_coeff != 0) {
                if(head3 == NULL) {
                    head3 = new Node(sum_coeff, temp1->expo);
                    ptr3 = head3;
                } else {
                    ptr3->next = new Node(sum_coeff, temp1->expo);
                    ptr3 = ptr3->next;
                }
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while(temp1 != NULL) {
        if(head3 == NULL) {
            head3 = new Node(temp1->coeff, temp1->expo);
            ptr3 = head3;
        } else {
            ptr3->next = new Node(temp1->coeff, temp1->expo);
            ptr3 = ptr3->next;
        }
        temp1 = temp1->next;
    }

    while(temp2 != NULL) {
        if(head3 == NULL) {
            head3 = new Node(temp2->coeff, temp2->expo);
            ptr3 = head3;
        } else {
            ptr3->next = new Node(temp2->coeff, temp2->expo);
            ptr3 = ptr3->next;
        }
        temp2 = temp2->next;    
    }
    cout<<"resultant polynomial after addition is:\n";
    traverse(head3);
}

int main() {
    Node* head1;
    Node* head2;
    cout<<"enter first polynomial\n";
    head1 = create_polygon();
    cout<<"enter second polynomial\n";
    head2 = create_polygon();
    traverse(head1);
    traverse(head2);
    add_polynomial(head1, head2);
}
