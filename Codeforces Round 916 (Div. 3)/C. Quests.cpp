#include <bits/stdc++.h>
using namespace std;
 
int solve(int* aaa , int* bbb , int n , int k){
    int sum[n];
    sum[0] = aaa[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + aaa[i];
    }
    int maxib[n];
    maxib[0] = bbb[0];
    for(int i=1;i<n;i++){
        maxib[i] = max(maxib[i-1] , bbb[i]);
    }
    int ans = INT_MIN;
    int i=0;
    while(i < min(n,k)){
        int xx = sum[i] + maxib[i]*(k-i-1);
        ans = max(ans , xx);
        i++;
    }
    return ans;
}
 
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k; cin>>k;//limit for number of fights 
        int aaa[n] , bbb[n];
        for(int i=0 ;i<n;i++){
            cin>>aaa[i];
        }
        for(int i=0 ;i<n;i++){
            cin>>bbb[i];
        }
        cout<<solve(aaa,bbb,n,k)<<endl;        
    }
}
