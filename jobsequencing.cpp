#include <bits/stdc++.h>
using namespace std;

struct job{
	int id;
	int deadline;
	int profit;
	
};
bool comp(job a,job b){
	return (a.profit>b.profit);
}
void jobsequencing(job arr[],int n){
	sort(arr,arr+n,comp);
	bool slot[n];
	int result[n];
	for(int i=0;i<n;++i)
		slot[i]=false;
	for(int i=0;i<n;++i){
		for(int j=min(n-1,arr[i].deadline)-1;j>=0;--j){
			if(slot[j]==false)
				{
					result[j]=i;
					slot[j]=true;
					break;
				}
			
		}
	}
	int totalprofit=0;
	for(int i=0;i<n;++i){
		if(slot[i]){
			cout<<arr[result[i]].id<<" ";
			totalprofit+=arr[result[i]].profit;
		}
	}
	cout<<endl;
	cout<<totalprofit<<endl;
}

int main(){

	int i,n,id,deadline,profit;
	cin>>n;
	job arr[n];
	
	for(i=0;i<n;++i){
		cin>>id>>deadline>>profit;
		arr[i].id=id;
		arr[i].deadline=deadline;
		arr[i].profit=profit;
	}
	jobsequencing(arr,n);









return 0;
}
