#include <bits/stdc++.h>
using namespace std;

void addedges(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printlist(vector<int>adj[],int n){
	for(int i=0;i<n;++i){
		cout<<"the adjacency elements of "<<i<<" is "<<endl;
		for(auto ele:adj[i]){
			cout<<ele<<endl;
		}
	}
}

int main(){
	
	int n,e;
	cin>>n>>e;
	vector<int> adj[n];
	for(int i=0;i<n;++i){
		int u,v;
		cin>>u>>v;
		addedges(adj,u,v);
	}
	printlist(adj,n);
	return 0;

}
