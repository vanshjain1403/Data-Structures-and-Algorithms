#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int value;
    Node* next;
    Node(int x){
        value = x;
        next = nullptr;
    }
};

void insertatbeginning(Node* &head, int val){
    Node* temp = head;
    Node* begin = new Node(val);
    begin->next = temp;
    head = begin;
}
void traverse(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->value<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    a->next = b;
    b->next = c;

    Node* head = a;

    insertatbeginning(head,0);
    traverse(head);
    return 0;
}