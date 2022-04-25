#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
			
	}
	const int N = 1e6+2;
	int idx[N];
	
	for(i=0;i<N;++i){
		idx[i]=-1;
	}
	int minidx=INT_MAX;
	for(i=0;i<n;++i){
		if(idx[a[i]]==-1){
			idx[a[i]]=i;
		}
		else 
		{
			minidx = min(minidx,idx[a[i]]);
		}
		
	}
	if(minidx==INT_MAX)
	cout<<"-1"<<endl;
	else cout<<minidx<<endl;
	
	return 0;
}
