#include <bits/stdc++.h>
using namespace std;
 

void pairs(){
	pair<int,int> p = {1,2};
	cout<<p.first<<" "<<p.second<<endl;
	pair<int,pair<int,int>> d = {1,{2,3}};
	cout<<d.first<<" "<<d.second.first<<" "<<d.second.second<<" "<<endl;
	
	
	pair<int,int> arr[] = {{3,4},{3,9},{4,1}};
	cout<<arr[1].second<<"  "<<arr[2].first<<endl;

}
void vectors(){
	vector<int> v;
	v.push_back(10);
	v.emplace_back(20);
	cout<<v[0]<<" "<<v[1]<<endl;;
	
	vector<int> v1(5,100);
	for(auto it:v1){
		cout<<it<<" ";
	}
	cout<<endl;
	v1[1]=200;
	v1[2]=300;
	v1[3]=400;
	v1[4]=500;
	for(vector<int>::iterator it = v1.begin();it!=v1.end();++it){
		cout<<*(it)<<" "<<endl;
	}
	v1.push_back(600);
	cout<<v1.back()<<endl;
	
	v1.erase(v1.begin());
	cout<<v1.size()<<endl;
	v1.erase(v1.begin(),v1.begin()+2);
	v1.insert(v1.begin()+1,2,10);
	for(auto it:v1)
		cout<<it<<endl;
	v1.clear();
	cout<<v1.empty();
	

}
void explainlist(){
	list<int> l;
	l.push_back(1);
	l.emplace_back(2);
	for(auto it:l)
		cout<<it<<" ";
	cout<<endl;
}
void explaindeque(){
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_back(4);
	dq.insert(dq.begin(),0);
	for(auto it:dq){
		cout<<it<<endl;
	}
}
void explainstack(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.pop();
	st.push(8);
	cout<<st.top()<<endl;
	cout<<st.size()<<endl;
}
void ExplainQueue(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.back()+=5;
	cout<<q.back()<<endl;
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.size()<<endl;


}
void ExplainpriorityQueue(){
	priority_queue<int> pq;
	pq.push(5);
	pq.push(1);
	pq.push(4);
	cout<<pq.top()<<endl;
	pq.pop();
	pq.push(10);
	
	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;
}
int main(){
	
	//vectors();
	//pairs();
	//explainlist();
	//explaindeque();
	//explainstack();
	//ExplainQueue();
	ExplainpriorityQueue();
	return 0;
}
