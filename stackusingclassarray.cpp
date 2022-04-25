#include <bits/stdc++.h>

using namespace std;

class Stack
{
	int *arr;
	int top;
	int capacity;
	
	
public :
	
	Stack(int capacity){
		this->capacity=capacity;
		top=-1;
		arr = new int[capacity];	
	
	}
	int size(){
	
		return top+1;
	}
	
	bool isEmpty(){
		return top==-1;
	}
	
	bool isFull(){
		return top+1==capacity;
	}
	
	void push(int data){
		if(isFull())
		{
		
			cout<<"Stack is Full"<<endl;
			return;
		}
		top++;
		arr[top]=data;
	}
	
	int pop(){
		if(isEmpty()){
			cout<<"Stack is EMpty";
			return -1;	
		}
		return arr[top--];
	}
	int seek(){
		if(isEmpty()){
			cout<<"stack is Empty";
			return -1;
			}
		return arr[top];		
	}
};

int main(){

	int i,capacity,n,data;
	cin>>capacity>>n;
	Stack st(capacity);
	
	for(i=0;i<n;++i){
		cin>>data;
		st.push(data);
	}
	
	cout<<"top of Stack is "<<st.seek()<<endl;
	
	cout<<"size of Stack is "<<st.size()<<endl;
	
	for(i=0;i<n;++i){
		cout<<st.pop()<<endl;
		
	}
	cout<<st.isEmpty()<<endl;
	
	



return 0;
}

