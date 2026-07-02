#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next=nullptr;
    }
};
int main() {
    Node a(10);
    Node b(20);
    Node c(30);

    a.next = &b;
    b.next = &c;

    Node* head = &a;

    return 0;
}