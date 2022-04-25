#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n,i,flag=0,j=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	const int N =1e6+2;
	int f[N];
	for(i=0;i<N;++i){
		f[i]=0;
	}
	for(i=0;i<n;++i){
		if(a[i]>=0)
		f[a[i]]=1;
	}
	for(i=0;i<N;++i){
		if(f[i]==0){
			flag=1;
			j=i;
			break;
		}
		
	}
	if(flag==1)
	cout<<j<<endl;
	else cout<<"-1"<<endl;
	

	return 0;
}
