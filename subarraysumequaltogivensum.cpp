#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int j,n,s,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
		
	}
	cin>>s;
	int sumptr=0,currptr=1,sum=a[0];
	for(j=1;j<n;++j){
		if(sum+a[j]==s)
		{
			sum+=a[j];
			currptr=j;
			break;
		}
		else if(sum+a[j]<s){
			sum+=a[j];
			currptr=j;
			continue;
			
		}
		else if(sum+a[j]>s){
			++sumptr;
			--j;
			continue;
				
		}
		
	}
	if(sum==s)
	cout<<sumptr<<"  "<<currptr<<endl;
	else cout<<"-1"<<endl;
	return 0;
}
