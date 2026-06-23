#include <bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<pow(a,b);
    return 0;
}