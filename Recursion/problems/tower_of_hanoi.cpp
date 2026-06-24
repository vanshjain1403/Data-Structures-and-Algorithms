#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, char A, char B, char C, int &count){
    if(n==0) return;
    hanoi(n-1,A,C,B,count);
    cout<<A<<"->"<<C<<endl;
    count++;
    hanoi(n-1,B,A,C,count);
}
int main() {
    int n;
    cin>>n;
    int count = 0;
    hanoi(n,'A','B','C',count);
    cout<<count<<endl;
    return 0;
}