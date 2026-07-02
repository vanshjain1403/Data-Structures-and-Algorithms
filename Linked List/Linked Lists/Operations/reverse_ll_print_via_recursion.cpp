#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
    }
};

void traverse(Node* head){
    if(head==nullptr){
        cout<<"NULL";
        return;
    }
    
    traverse(head->next);
    cout<<"<--"<<head->data;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node*c = new Node(30);

    a->next = b;
    b->next = c;
    c->next = nullptr;

    Node* head = a;
    
    traverse(head);

    return 0;
}