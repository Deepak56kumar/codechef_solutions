
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n, ll m,ll x0,ll y0,ll l){
    ll rc=1;
    if(l==1){
        return n*m;
    }
    else{
        ll upWard=(x0-1)/l;
        ll downWard=(n-x0)/l;
        ll leftWard=(y0-1)/l;
        ll rightWard=(m-y0)/l;
        rc=1+(upWard+downWard)+(leftWard+rightWard)+(upWard+downWard)*(leftWard+rightWard);
    }
return rc;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,m,x0,y0,l;
	    cin>>n>>m>>x0>>y0>>l;
	    ll ans=solve(n,m,x0,y0,l);
	    cout<<ans<<endl;
	}
	return 0;
}
