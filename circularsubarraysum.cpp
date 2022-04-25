#include <bits/stdc++.h>
using namespace std;

int kadanealgo(int a[],int n){
	int currsum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;++i){
		currsum+=a[i];
		if(currsum<0)
			currsum=0;
		maxsum=max(maxsum,currsum);
	}
	return maxsum;
}

int main(){
	
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	int nonwrapsum = kadanealgo(a,n);
	int wrapsum =0;
	int totalsum=0;
	for(i=0;i<n;++i){
		totalsum+=a[i];
		a[i]=-a[i];
		
	}
	wrapsum = totalsum + kadanealgo(a,n);
	cout<<max(wrapsum,nonwrapsum)<<endl;


	return 0;
}
