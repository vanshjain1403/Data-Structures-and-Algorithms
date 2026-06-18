#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "MeraBharatMahaan";
    int count = 0;
    for(int i = 0;i<s.length();i++){
        for(int j = i;j<s.length();j++){
            cout<<s.substr(i,j-i+1)<<endl;
            count++;
        }
    }
    cout<<"Total substrings: "<<count<<endl;
    return 0;
}