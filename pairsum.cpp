#include <bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int s){
	int low=0,high=n-1;
	
	while(low<high){
	
		if(a[low]+a[high]==s){
			cout<<low<<"  "<<high<<endl;
			return true;
			}
		else if(a[low]+a[high]>s)
			--high;
		else if(a[low]+a[high]<s)
			++low;
	}
	return false;
	
}
	

int main(){
	int i,s,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>s;
	sort(a,a+n);
	pairsum(a,n,s);
}
