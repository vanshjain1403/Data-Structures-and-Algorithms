#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    int rem = a%b;
    a = b;
    b = rem;
    return gcd(a,b);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"GCD:"<<gcd(a,b)<<endl;
    cout<<"LCM:"<<(a/gcd(a,b))*b;
    return 0;
}