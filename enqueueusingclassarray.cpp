#include <bits/stdc++.h>
using namespace std;

class Queue{
	
	int size,capacity;
	int front,rear;
	int *arr;
	
public:
	Queue(int capacity){
		this->capacity = capacity;
		rear = capacity-1;
		front =0;
		size=0;
		arr = new int[capacity];
	}
	
	int isFull(){
		return size==capacity;
	}
	int isEmpty(){
		return size==0;
	}
	void enqueue(int data){
		if(isFull()){
			cout<<"The queue is full"<<endl;
			return;
		}
		rear = (rear+1)%capacity;
		arr[rear]=data;
		++size;
	}
	int frontele(){
		if(isEmpty()){
			cout<<"The queue is Empty";
			return INT_MIN;
		}
		return arr[front];
	}
	int rearele(){
		if(isEmpty()){
			cout<<"The queue is Empty";
			return INT_MIN;
		}
		return arr[rear];
	}
	void display(){
		for(int i=0;i<size;++i){
			cout<<arr[(front+i)%capacity]<<" ";
		}
		cout<<endl;
	}
	int dequeue(){
		if(isEmpty()){
			cout<<"Queue is Empty "<<endl;
			return INT_MIN;
		}
		int data  = arr[front];
		front = (front+1)%capacity;
		size=size-1;
		return data;
	}
	


};

int main(){
	
	int capacity,n;
	cin>>capacity>>n;
	Queue queue(capacity);
	for(int i=0;i<n;++i){
		int ele;
		cin>>ele;
		queue.enqueue(ele);
		
	}
	queue.display();
	cout<<"Dequeue element "<<queue.dequeue()<<endl;
	
	cout<<"front element is : "<<queue.frontele()<<endl;
	
	cout<<"Dequeue element "<<queue.dequeue()<<endl;
	queue.enqueue(100);
	queue.display();
	cout<<"rear element is : "<<queue.rearele()<<endl;


	return 0;
}
