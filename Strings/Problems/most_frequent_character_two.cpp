#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int i = 0;
    
    int maxcount = 0;
    char maxalpha;
    while(i<s.length()){
        int count = 1;
        int j = i+1;
        while(s[j]==s[i]){
            j++;
            count++;
        }
        if(count>maxcount){
            maxcount = count;
            maxalpha = s[i];
        }
        
        i = j;
    }
    cout<<maxalpha<<endl;
    cout<<maxcount<<endl;
    
    return 0;
}