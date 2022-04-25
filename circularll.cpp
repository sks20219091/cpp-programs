#include <bits/stdc++.h>

using namespace std;

typedef struct Node{
	int data;
	struct Node *next;
	
}node;

node *head=NULL;
node *tail=NULL;

void insertatbegin(int data){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		tail=newnode;
		return ;
	}
	newnode->next=head;
	head=newnode;
	tail->next=head;

}
void insertatend(int data){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(head ==NULL){
		head=newnode;
		tail=newnode;
		return;
	}
	tail->next=newnode;
	tail=newnode;
	tail->next=head;
	
	
}
void insertatmid(int pos,int data){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL){
		head = newnode;
		tail = newnode;
		return ;
	}
	node *temp=head;
	if(temp->next==NULL){
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
		return ;
	}
	int count=1;
	while(count<pos&&temp->next!=head){
		count++;
		temp=temp->next;
	}
	if(temp->next==head){
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
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
	tail->next=head;
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
		tail=NULL;
		free(temp);
		return;
	}
	while(temp->next->next!=head){
		temp=temp->next;
	
	}
	node *temp1 = tail;
	temp->next=head;
	temp1->next=NULL;
	tail=temp;
	
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
		tail=NULL;
		free(temp);
		return ;
	}
	int count=1;
	while(count<pos-1 && temp->next!=head){
		count++;
		temp=temp->next;
	}
	if(temp->next==head){
		node *temp1=tail;
		temp->next=head;
		tail=temp;
		free(temp1);
	}
	node *temp1=temp->next;
	temp->next=temp1->next;
	temp1->next=NULL;
	free(temp1);
}
void display(){
	node *temp;
	temp=head;
	do{
		
		cout<<temp->data<<" ";
		
		temp=temp->next;
	}while(temp!=head);
	

}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int i,n,data;
		cin>>n;
		for(i=0;i<n;++i){
			cin>>data;
			insertatbegin(data);
		}
		cout<<"Insert at Beginning";
		display();
		cout<<endl;
		cout<<"deletion at beginning:";
		deleteatbegin();
		display();
		head=NULL;
		tail=NULL;
		
		cin>>n;
		for(i=0;i<n;++i){
			cin>>data;
			insertatend(data);	
		}
		cout<<"Insert at End";
		display();
		cout<<endl;
		cout<<"deletion at End: ";
		deleteatEnd();
		display();
		int pos;
		cin>>pos;
		cin>>data;
		insertatmid(pos,data);
		display();
		cout<<endl;
		int p;
		cin>>p;
		cout<<"deletion at middle: ";
		deleteatmid(p);
		display();
		head=NULL;
		tail=NULL;
		
		
		
	}



return 0;
}

