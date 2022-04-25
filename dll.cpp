#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}node;

node * head=NULL;
void insertatbegin(int data){
	node *newnode = (node*)malloc (sizeof(node));
	
	if(head==NULL){
		newnode->data=data;
		newnode->next=NULL;
		newnode->prev=NULL;
		head=newnode;
		return;
	}
	newnode->data=data;
	newnode->next=head;
	newnode->prev=NULL;
	
	head->prev=newnode;
	head=newnode;

}
void insertatend(int data){
	node *newnode= (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	node *temp =head;
	if(head==NULL){
		head=newnode;
		return ;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	
	}
	temp->next=newnode;
	newnode->prev=temp;

}
void insertatmid(int  data,int pos){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	
	node *temp = head;
	if(head==NULL){
		head=newnode;
		return ;
	}
	int count=1;
	while(count<pos&&temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	if(temp->next==NULL){
		temp->next=newnode;
		newnode->prev=temp;
		return;
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	newnode->next->prev=newnode;
	

}
void display(){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;	
	}

}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int data,i,n;
		cin>>n;
		for(i=0;i<n;++i){
			cin>>data;
			insertatbegin(data);
		}
		cout<<"Insert at Beginning: ";
		display();
		cout<<endl;
		
		cin>>n;
		for(i=0;i<n;++i){
			cin>>data;
			insertatend(data);
		}
		cout<<"Insert at End: ";
		display();
		cout<<endl;
		
		int pos;
		cin>>pos;
		cin>>data;
		cout<<"insert at mid"<<pos<<" :";
		insertatmid(data,pos);
		display();
		cout<<endl;
		
		
	
	}
	
	
	
	
	
	
	
	
	return 0;
}
