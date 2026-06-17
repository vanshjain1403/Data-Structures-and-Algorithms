#include <bits/stdc++.h>
using namespace std;
void change(string x){
    x[2] = 'b';
}
int main() {
    string one = "Vansh";
    change(one);
    cout<<one;
    return 0;
}