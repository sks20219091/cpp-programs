#include <bits/stdc++.h>

using namespace std;

typedef struct Node{
	int data;
	struct Node *next;
}node;

node *head = NULL;

void insertatbegin(int data){
	
	node *newnode = (node*)malloc (sizeof(node));
	newnode->data = data;
	newnode->next=head;
	head = newnode;
}
void insertatend(int data){
	node *newnode = (node*)malloc (sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	
	node *temp=head;
	if(temp==NULL)
	{
		head=newnode;
		return;
	}
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=newnode;
}

void insertinmiddle(int data,int pos){
	node *temp=head;
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	
	if(temp==NULL){
		head=newnode;
		return ;
	}
	int count=1;
	while(count<pos && temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	if(temp->next==NULL){
		temp->next=newnode;
		return ;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}

void deleteatbegin(){
	node *temp = head;
	if(temp==NULL){
		cout<<"Linked List is Empty ";
		return ;
	}
	head=head->next;
	free(temp);
	
}
void deleteatEnd(){
	node *temp=head;
	if(temp==NULL){
		cout<<"LinkedList is Empty";
		return;
	}
	if(temp->next==NULL){
		head=NULL;
			
		free(temp);
		return;
	}
	while(temp->next->next!=NULL){
		temp=temp->next;
	
	}
	node *temp1 = temp->next;
	temp->next=NULL;
	free(temp1);
}
void deleteatmid(int pos){
	node *temp=head;
	if(temp==NULL){
		cout<<"LinkedList is Empty";
		return ;
		
	}
	if(temp->next==NULL){
		head=NULL;
		free(temp);
		return ;
	}
	int count=1;
	while(count<pos-1){
		count++;
		temp=temp->next;
	}
	node *temp1=temp->next;
	temp->next=temp1->next;
	temp1->next=NULL;
	free(temp1);
}

void display(){
	
	node *temp;
	temp= head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}


}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int data;
		for(int i=0;i<n;++i){
			cin>>data;
			insertatbegin(data);	
		}
		
		cout<<"Insert at Beginning :";
		display();
		cout<<endl;
		deleteatbegin();
		head=NULL;
		
		
		cin>>n;
		
		for(int i=0;i<n;++i){
			cin>>data;
			insertatend(data);	
		}
		
		
		cout<<"Insert at end :";
		display();
		cout<<endl;
		
		deleteatEnd();
	
		int pos;
		cin>>pos;
		cin>>data;
		insertinmiddle(data,pos);
		cout<<"Insert at Middle:";
		display();
		cout<<endl;
		
		
		deleteatbegin();
		display();
		deleteatEnd();
		display();
		cin>>pos;
		deleteatmid(pos);
		display();
	
	
	}




return 0 ;



}



