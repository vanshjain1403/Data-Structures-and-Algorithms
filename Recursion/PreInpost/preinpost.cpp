#include <bits/stdc++.h>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"Pre:"<<n<<" ";
    pip(n-1);
    cout<<"In:"<<n<<" ";
    pip(n-1);
    cout<<"Post:"<<n<<" ";
}
int main() {
    int n;
    cin>>n;
    pip(n);
    return 0;
}