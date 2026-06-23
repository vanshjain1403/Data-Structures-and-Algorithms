#include <bits/stdc++.h>
using namespace std;
int pow(int a,int b){  
     if(b==0) return 1;  
     int val = pow(a,b/2);  
     if((b%2)==0) return val*val;  
     else return a*val*val;

}
int main() {  
     int a;  
     cin>>a;  
     int b;  
     cin>>b;  
     cout<<pow(a,b);  
     return 0;
}