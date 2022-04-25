#include <bits/stdc++.h>
using namespace std;
	
bool adjmatrix[100][100];
	
	
void addedge(int u,int v){
	
	adjmatrix[u][v]=true;
	adjmatrix[v][u]=true;
}

void printmatrix(int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<adjmatrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	
}


int main(){
	int i,n,u,v;
	cin>>n;
	adjmatrix[n][n];
	for(i=0;i<n;++i){
		cin>>u>>v;
		addedge(u,v);
	}
	printmatrix(n);
	return 0;
}
