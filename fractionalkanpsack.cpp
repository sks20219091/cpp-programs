#include  <bits/stdc++.h>
using namespace std;

struct product{
	float wt;
	float profit;
	float pw;
};

bool comp(product a,product b){
	return a.pw<b.pw;
}

void fractionalknapsack(product arr[],int cap,int n){
	sort(arr,arr+n,comp);
	int i,flag=0;
	float totalprofit=0;
	for(i=n-1;i>=0;i--){
		int profit = arr[i].profit;
		int wt = arr[i].wt;
		
		if(cap>0 && wt<=cap){
			totalprofit+=profit;
			cap=cap-wt;
		}
		else
		{
			flag=1;
			break;
		}
	}
		if(flag==1){
			totalprofit+=arr[i].profit * (cap/arr[i].wt);
			
		}
		
		
			
	
	cout<<totalprofit<<endl;
}

int main(){

	int n,i,cap;
	cin>>n;
	cin>>cap;
	float wt[n],profit[n];
	for(i=0;i<n;++i){
		cin>>wt[i];
	}
	for(i=0;i<n;++i){
		cin>>profit[i];
	}
	product arr[n];
	for(i=0;i<n;++i){
		arr[i].wt=wt[i];
		arr[i].profit=profit[i];
		arr[i].pw = profit[i]/wt[i];
		
	}
	fractionalknapsack(arr,cap,n);

return 0;
}
