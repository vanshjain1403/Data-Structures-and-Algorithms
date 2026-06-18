#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Mahavira Mahavira";
    cout<<s[4]<<endl;
    cout<<s.at(4)<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.rfind('v')<<endl;
    s=s+" Jai Bolo Jai "+to_string(1008);
    
    cout<<s<<endl;
    return 0;
}