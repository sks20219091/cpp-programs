#include <bits/stdc++.h>

using namespace std;

int maxsubarraysum(int a[],int low,int high){
	if(low==high)
		return a[low]; // array length is 1
	
	int mid = (low+high)/2;
	int sum=0;
	int leftmax=INT_MIN;
	for(int i=mid;i>low-1;--i){
		sum+=a[i];
		if(sum>leftmax)
			leftmax=sum;
	}
	int rightmax=INT_MIN;
	sum=0;
	for(int i=mid+1;i<high+1;++i){
		sum+=a[i];
		if(sum>rightmax)
			rightmax=sum;
	}
	int leftarraymax=maxsubarraysum(a,low,mid);
	int rightarraymax=maxsubarraysum(a,mid+1,high);
	
	return  max(leftmax+rightmax,max(leftarraymax,rightarraymax));
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int i,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		
	}
	cout<<maxsubarraysum(a,0,n-1)<<endl;
		
	
	}
	

		

return 0;
}
