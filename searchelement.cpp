#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int i,j,n,m,ele;
	cin>>n>>m;
	cin>>ele;
	
	int a[n][m];
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			cin>>a[i][j];
		}
	
	}
	
	int r=0,c=m-1;
	int flag = 0;
	while(r<n&&c>=0){
		if(a[r][c]==ele){
			flag = 1;}
		else if(a[r][c]>ele){
				c--;}
		else {
			r++;
		}						
	}
	if(flag==1)
	cout<<"elelment is found";
	else
	 cout<<"element is not found";

	
	return 0;
}
