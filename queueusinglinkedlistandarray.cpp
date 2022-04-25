#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
	
};
class Queue{
	public:
	Node *front,*rear;
	
	Queue(){
		rear=front=NULL;
	}
	void enqueue(int data)
	{
		Node *temp = new Node(data);
		if(rear==NULL){
			front=rear=temp;
			return ;
		}
		rear->next=temp;
		rear = temp;
	}
	int dequeue(){
		if(front==NULL)
			return INT_MIN;
		Node *temp = front;
		front=front->next;
		if(front==NULL){
			front=rear=NULL;
		
		}
		int data = temp->data;
		free(temp);
		return data;
		
	}
};
int main(){
	
	Queue qu;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int ele;
		cin>>ele;
		qu.enqueue(ele);
	}
	cout<<"front element is : "<<qu.dequeue()<<endl;
	cout<<"front element is : "<<qu.dequeue()<<endl;
	qu.enqueue(100);
	cout<<"front element is : "<<qu.front->data<<endl;
	
	

return 0;
}
