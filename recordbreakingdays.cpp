#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int j,i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	int mx=-1,c=0;
	for(i=0;i<n-1;++i){
			
		if(a[i]>mx&&a[i]>a[i+1]){
			
				++c;
		}
		mx=max(a[i],mx);
		
	}
	cout<<c<<endl;


	return 0;
}
