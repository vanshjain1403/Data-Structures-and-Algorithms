#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int maxfreq = INT_MIN;
    char maxalpha;
    for(int i = 0; i<s.length();i++){
        
        int count = 1;
        for(int j = i+1;j<s.length();j++){
            if(s[i]==s[j]) count++;
        }
        if(count>maxfreq){
            maxalpha = s[i];
            maxfreq = count;
        }
        else if(count==maxfreq){
            if(s[i]<maxalpha){
                maxalpha = s[i];
            }
        }
    }
    cout<<maxalpha<<endl;
    return 0;
}