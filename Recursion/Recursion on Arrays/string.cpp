#include <bits/stdc++.h>
using namespace std;
void change(string s){
    s = "beivrvbt";
}
void changetop(vector<string> q){
    q.push_back("Aonla");
    for(string f:q){
        cout<<f<<endl;
    }
}
void changeto(vector<string> &q){
    q.push_back("Aonla");
    for(string f:q){
        cout<<f<<endl;
    }
}
int main() {
    string s = "Vansh Jain";
    change(s);
    cout<<s;
    cout<<endl;
    vector<string> q = {"Vansh","Jain","UPES"};
    for(string f:q){
        cout<<f<<endl;
    }
    q.push_back("Dehradun");
    q.push_back("Saharanpur");
    q.push_back("Kairana");
    q.push_back("Muzzafarnagar");
    for(string f:q){
        cout<<f<<endl;
    }
    changetop(q);
    for(string f:q){
        cout<<f<<endl;
    }
    changeto(q);
    for(string f:q){
        cout<<f<<endl;
    }
    return 0;
}