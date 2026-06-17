#include <bits/stdc++.h>
using namespace std;

int main() {
    string st;
    getline(cin,st);
    int i = 0;
    int j = st.length()-1;
    bool flag = true;
    while(i<j){
        if(st[i++]==st[j--])continue;
        else{
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}