#include<bits/stdc++.h>
using namespace std;
#define ya ||
bool solve(vector<int>&nums,int n){
    if(n==1) return true;
    if(n==2){
        if(nums[0]>nums[1]) return false;
    }
    if(n==3){
        if(nums[1]<min(nums[0],nums[2]) ya nums[1]>max(nums[0],nums[2]))
        return false;
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