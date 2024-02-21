#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>&v,int n){
    for(int i=0;i<n;i++){
	        if(v[i]<=4) return false;
	    }
	   return true;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    if(solve(v,n))
	        cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}