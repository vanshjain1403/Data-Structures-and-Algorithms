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
void insertion_at_end(Node* head,int val){
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
void insertatbeginning(Node* &head, int val){
    Node* temp = head;
    Node* begin = new Node(val);
    begin->next = temp;
    head = begin;
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
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node*c = new Node(3);

    a->next = b;
    b->next = c;

    Node* head = a;
    insertion_at_end(head,63);
    traverse(head);
    return 0;
}