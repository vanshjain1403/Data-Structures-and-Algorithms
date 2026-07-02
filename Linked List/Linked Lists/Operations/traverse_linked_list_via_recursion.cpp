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

void traverse(Node* head){
    if(head==nullptr) return;
    cout<<head->data<<endl;
    traverse(head->next);

}


int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node*c = new Node(3);

    a->next = b;
    b->next = c;

    Node* head = a;
    traverse(head);
    return 0;
}