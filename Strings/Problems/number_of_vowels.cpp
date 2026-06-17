#include <bits/stdc++.h>
using namespace std;

int main() {
    string sent;
    cout<<"Enter the string: ";
    getline(cin,sent);
    int count = 0;
    for(char x:sent){
        x = tolower(x);
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
            count++;
        }
    }
    cout<<"Count of vowels: "<<count;
    return 0;
}