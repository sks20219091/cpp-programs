#include <bits/stdc++.h>
using namespace std;

class Node{

public :
	int data;
	Node *next;
	
	Node(int data){
		this->data=data;
		next=NULL;
	}

};

class Stack{
	Node* head;
public :	
	Stack(){
		head = NULL;
	}
	
	void push(int data){
		Node *newnode = new Node(data);
		newnode->next=head;
		head=newnode;	
	}

	int isEmpty(){
		return head==NULL;
	}
	int peek(){
		if(isEmpty()){
			cout<<"Stack is Empty : ";
			return -1;
			
		}
		return head->data;
	}
	
	int pop(){
		
		Node *temp=head;
		if(head==NULL){
			cout<<"Stack is Empty ";
			return -1;
		} 
		
		int ele = head->data;
		head=head->next;
		free(temp);
		return ele;
		
	}

};

int main(){
	Stack st;
	int i,n,data;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>data;
		st.push(data);
	}
	
	cout<<"Top of Stack is "<<st.peek()<<endl;
	
	for(i=0;i<n;++i){
		cout<<st.pop()<<endl;
	}
	
	cout<<st.isEmpty()<<endl;




return 0;
}
