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

bool traverse(Node* head, int val){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data==val) return true;
        temp = temp->next;
    }
    return false;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* head = a;
    int n;
    cin>>n;
    cout<<traverse(head,n);
    return 0;
}