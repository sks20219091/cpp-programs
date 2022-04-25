#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	int currsum=0;
	int maxsum=INT_MIN;
	for(i=0;i<n;++i){
		currsum+=a[i];
		if(currsum<0)
		currsum=0;
		maxsum = max(maxsum,currsum);
	}
	cout<<maxsum<<endl;
	
	return 0;
}
