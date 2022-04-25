#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	struct Node *next;
	
}node;

node *head = NULL;
int size=0;
void push(int data){
	node *newnode = (node*)malloc(sizeof(node));
	if(!newnode){
		cout<<"Heap overflow"<<endl;
		return ;
	}
	newnode->data=data;
	newnode->next=head;
	head= newnode;
	size++;

}
int isEmpty(){
	return head==NULL;

}


int peek(){
	if(isEmpty()){
		cout<<"Stack is EMpty";
		return -1;
	}
	return head->data;
}

int pop(){
	
	node *temp=head;
	if(head==NULL){
		cout<<"Stack is Emppty";
		return -1;
	}
	int ele = head->data;
	temp=head;
	head=head->next;
	free(temp);
	size--;
	return ele;

}
int sizeFunc(){
return size;
}


int main(){
	int i,n,data;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>data;
		push(data);
	}
	
	cout<<"Top element of Stack is "<<peek()<<endl;
	
	cout<<"size of Stack is  "<<sizeFunc()<<endl;
	
	for(i=0;i<n;++i){
		cout<<pop()<<endl;
	}
	cout<<isEmpty()<<endl;




return 0;
}






