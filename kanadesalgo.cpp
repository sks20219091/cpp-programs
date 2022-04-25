#include <bits/stdc++.h>

using namespace std;


int maximumsubarraysum(int a[],int n){
	int currsum=0;
	int maxsum=0;
	
	for(int i=0;i<n;++i){
		
		currsum+=a[i];
		
		if(maxsum<currsum){
			maxsum=currsum;
		}
		if(currsum<0)
		currsum=0;
		
	}
	return maxsum;

}

int main(){

	int n,a[100];
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		
	}
	cout<<maximumsubarraysum(a,n)<<endl;


return 0;
}
