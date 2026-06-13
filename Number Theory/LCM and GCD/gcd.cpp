#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a==0||b==0){
        cout<<max(a,b);
        return 0;
    }
    while(a!=b){
        if(a>b) a=a-b;
        else if(a<b) b = b-a;
    }
    cout<<a<<endl;
    return 0;
}