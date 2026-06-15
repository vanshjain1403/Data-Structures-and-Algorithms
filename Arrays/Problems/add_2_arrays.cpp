#include <bits/stdc++.h>
using namespace std;
vector<int> addarrays(int arr1[],int n,int arr2[],int m){
    vector<int>ans;
    int carry = 0;
    int sum = 0;
    int i = n-1;
    int j = m-1;

    while(i>=0&&j>=0){
        sum = arr1[i]+ arr2[j]+carry;
        int val = sum%10;
        ans.push_back(val);
        carry = sum/10;
        i--;
        j--;

    }
    while(i>=0){
        sum = arr1[i]+carry;
        int val = sum%10;
        ans.push_back(val);
        carry = sum/10;
        i--;
    }
    while(j>=0){
        sum = arr2[j]+carry;
        int val = sum%10;
        ans.push_back(val);
        carry = sum/10;
        j--;
    }
    while(carry!=0){
        ans.push_back(carry);
        carry = carry/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    int n;
    int m;
    cout<<"Enter digits of number 1: ";
    cin>>n;
    cout<<endl;
    int *arr1 = new int[n];
    cout<<"Enter number 1 elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter digits of number 2: ";
    cin>>m;
    cout<<endl;
    int *arr2 = new int[m];
    cout<<"Enter number 2 elements: "<<endl;
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> sum = addarrays(arr1,n,arr2,m);
    for(auto x:sum){
        cout<<x<<" ";
    }
    return 0;
}