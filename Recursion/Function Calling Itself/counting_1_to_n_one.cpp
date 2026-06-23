#include <bits/stdc++.h>
using namespace std;
int x;
void print(int n){
    if(n>x) return;
    cout<<n<<endl;
    print(n+1);
}
int main() {
    int y;
    cin>>y;
    x=y;
    print(1);
    return 0;
}