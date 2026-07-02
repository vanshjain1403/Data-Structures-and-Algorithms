#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; 
void insertatbeginning(Node* &head, int val){
    Node* temp = head;
    Node* begin = new Node(val);
    begin->next = temp;
    head = begin;
}
void insert_in_middle(Node* &head,int val,int pos){
    if(pos==1){
        insertatbeginning(head,val);
        return;
    }
    Node* temp = head;
    int count = 1;
    while((count<(pos-1)) && (temp->next!=nullptr)){
        temp = temp->next;
        count++;
    }
    Node* middle = new Node(val);
    middle->next = temp->next;
    temp->next = middle;
}
void insertion_at_end(Node* &head,int val){
    if(head == nullptr) { 
        head = new Node(val); 
        return; 
    }
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    Node* end = new Node(val);
    temp->next = end;

}
void delete_start_node(Node* &head){
    if(head==nullptr) return;
    Node* temp = head;
    head = head->next;
    free(temp);

}
void traverse(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;


    Node* head = a;

    delete_start_node(head);
    traverse(head);
    return 0;
}