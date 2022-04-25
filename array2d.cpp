#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,j,n,m;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			cin>>a[i][j];
		}
	}	
	int row=0,column=0;
	int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
	while(row_start<=row_end&&column_start<=column_end){
	
		//1st row
		for(column=column_start;column<=column_end;++column){
			cout<<a[row_start][column]<<" ";
		}
		cout<<endl;
		++row_start;
		//last column
		for(row=row_start;row<=row_end;++row){
			cout<<a[row][column_end]<<" ";
		}
		cout<<endl;
		column_end--;
		//last line
		for(column=column_end;column>=0;--column){
			cout<<a[row_end][column]<<" ";
		}
		cout<<endl;
		row_end--;
		//1st column 
		for(row=row_end;row>=row_start;--row){
			cout<<a[row][column_start]<<" ";
		}
			
		cout<<endl;
		++column_start;
		
	}	
	
	
	return 0;
}
