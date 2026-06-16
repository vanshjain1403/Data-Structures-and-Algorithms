#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int m = 3;
    int arr[3][3];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int maxsum = INT_MIN;
    int maxrow = -1;
     for(int i = 0;i<n;i++){
        sum = 0;
        for(int j = 0;j<m;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxrow = i;
        }
    }
    cout<<"Max sum is "<<maxsum<<" in the row "<<maxrow<<endl;
    return 0;
}