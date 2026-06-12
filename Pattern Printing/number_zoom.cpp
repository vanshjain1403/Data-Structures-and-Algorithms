#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1;i<2*n;i++){
        for(int j = 1;j<2*n;j++){
            int a = i,b = j;
            if(i>n) a = 2*n - i;
            if(j>n) b = 2*n - j;
            cout<<n - min(a,b) + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}