#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int mx=0,id=0;
	    for(int i=1;i<23;i++){
	        int a,b;
	        cin>>a>>b;
	        int totalScore=a+b*20;
	        if(totalScore>mx){
	            mx=totalScore;
	            id=i;
	        }
	    }
	    cout<<id<<endl;
	}
	return 0;
}
