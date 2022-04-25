#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
	
		int i,n;
		cin>>n;
		int a[n];
		for(i=0;i<n;++i){
			cin>>a[i];
		}
		int pd = a[1]-a[0];
		int curr=2;
		int ans =2;
		int j=2;
		while(j<n){
			if(pd == a[j]-a[j-1]){
				++curr;
				
			}
			else {
				pd=a[j]-a[j-1];
				curr=2;
			}
			ans=max(curr,ans);
			j++;
		}
		cout<<ans<<endl;
	
	}



	return 0;
}

