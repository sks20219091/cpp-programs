#include <bits/stdc++.h>
using namespace std;

struct Items{
	int fv;
	int sv;
	int t;
};

bool comp(Items a,Items b){
	if(a.t==b.t)
		return a.fv < b.fv;
	else {
		return a.t < b.t; }
}

int main(){
	
	int i,n,f,s;
	cin>>n;
	Items arr[n];
	for(i=0;i<n;++i){
		cin>>f>>s;
		arr[i].fv=f;
		arr[i].sv=s;
		arr[i].t=f+s;
	}
	sort(arr,arr+n,comp);
	for(i=0;i<n;++i){
		cout<<arr[i].fv<<" + "<<arr[i].sv<<" = "<<arr[i].t<<endl;
		
	}
	
	

return 0;

}
