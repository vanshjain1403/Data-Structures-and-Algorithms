#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix(3,vector<int>(5));
    
    for(auto &x:matrix){
        for(int y:x){
            cout<<y<<" ";
        }
    }
    return 0;
}