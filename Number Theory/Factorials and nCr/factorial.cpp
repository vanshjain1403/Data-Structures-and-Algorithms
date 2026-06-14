#include <bits/stdc++.h>
using namespace std;
long long fact(long long n){
    if(n==0||n==1) return 1;
    long long f = 1;
    for(int i = 1;i<=n;i++){
        f = f*i;
    }
    return f;
}
int main() {
    long long n;
    cin>>n;
    cout<<"Factorial is: "<<fact(n)<<endl;
    return 0;
}