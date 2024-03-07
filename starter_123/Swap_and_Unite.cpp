#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int L,R;
        cin>>L>>R;
        int n=R-L+1;
        if(n%2==0){
            int i=R;
            while(n>1){
                cout<<i<<" ";
                i--;
                n--;
            }
            cout<<i<<nline;
        }
        else{
            cout<<L<<" ";
            int i=R;
            n=n-1;
            while(n>1){
                cout<<i<<" ";
                i--;
                n--;
            }
            cout<<i<<nline;
        }
    }
return 0;
}