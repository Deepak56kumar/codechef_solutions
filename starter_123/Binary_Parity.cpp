#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;
int solve(int n){
    int dsum=0;
    
    while(n!=0){
        dsum+=n%2;
        n/=2;
    }
return dsum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int binaryDigitSum=solve(n);
        if(binaryDigitSum%2==0) cout<<"EVEN"<<nline;
        else cout<<"ODD"<<nline;
    }
return 0;
}