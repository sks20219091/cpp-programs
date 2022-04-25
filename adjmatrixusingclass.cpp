#include <bits/stdc++.h>
using namespace std;

class Graphs{
	bool **adjmatrix;
	int nodes;
	
public:
	Graphs(int nodes){
	
		this->nodes=nodes;
		adjmatrix = new bool*[nodes];
		
		for(int i=0;i<nodes;++i){
		
			adjmatrix[i] = new bool[nodes];
			for(int j=0;j<nodes;++j){
			
				adjmatrix[i][j]=false;
			}
		}
	}
	
	void addedge(int u,int v){
		adjmatrix[u][v]=true;
		adjmatrix[v][u]=true;
	}
	void printmatrix(){
		for(int i=0;i<nodes;++i){
		cout<<i<<": ";
			for(int j=0;j<nodes;++j){
				cout<<adjmatrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	

};



int main(){
	int nodes,e,u,v;
	cin>>nodes>>e;
	Graphs gp(nodes);
	for(int i=0;i<nodes;++i){
		cin>>u>>v;
		gp.addedge(u,v);
	}
	gp.printmatrix();
	

return 0;
}
