#include <bits/stdc++.h>
using namespace std;
void gcd(int a,int b){
    if(b == 0) { cout << a << endl; return; } 
    int rem = a%b;
    if(rem==0){
        cout<<b<<endl;
        return;
    }
    gcd(b,rem);
}
int main() {
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}