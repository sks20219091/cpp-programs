#include <bits/stdc++.h>
using namespace std;

class graphs{
	int nodes;
	list<int> *adj;
	
public:
	graphs(int nodes){
		this->nodes=nodes;
		adj = new  list<int>[nodes];
	}
	void addedges(int u,int v){
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	void printlist(){
		for(int i=0;i<nodes;++i){ 
			cout<<"adjacency elements of "<<i<<"is "<<endl;
			for(auto ele:adj[i]){
				cout<<ele<<endl;
			}
		}
		
	}
	
	
};

int main(){

	int n,e;
	cin>>n>>e;
	graphs gp(n);
	for(int i=0;i<n;++i){
		int u,v;
		cin>>u>>v;
		gp.addedges(u,v);
	}	
	gp.printlist();
	return 0;
}
