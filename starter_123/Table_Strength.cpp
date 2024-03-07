#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;
int solve(vector<int>&v,int n){
    sort(v.begin(),v.end());
        int mx=0;
        for(int i=n-1;i>=0;i--){
            int w=v[i]*(n-i);
            mx=max(mx,w);
        }
return mx;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        cout<<solve(v,n)<<nline;
    }
return 0;
}