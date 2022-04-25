#include <bits/stdc++.h>

using namespace std;

void misc(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	
	
	bool s = binary_search(a,a+n,3);
	bool t = binary_search(a,a+n,8);
	cout<<s<<"n"<<t<<endl;

}


void explainset(){

	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(6);
	
	for(auto it:s){
		cout<<it<<" ";
	}
	cout<<endl;
	s.erase(5);
	for(auto it:s){
		cout<<it<<" ";
	}
	cout<<endl;
	auto it = s.find(3);
	
	
	cout<<endl;
	auto it1 = s.find(6);
	s.erase(it,it1);
	for(auto it:s){
		cout<<it<<" ";
	}
}

int main(){

	//explainset();
	misc();



	return 0;
 }

