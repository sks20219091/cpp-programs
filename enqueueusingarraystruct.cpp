#include <bits/stdc++.h>
using namespace std;

typedef struct queue{
	
	int rear,front;
	int size,capacity;
	int *arr;

}Queue;

Queue *createQueue(int capacity){
	Queue *qu = (Queue*)malloc(sizeof(Queue));
	qu->capacity=capacity;
	qu->size=0;
	qu->front=0;
	qu->rear=capacity-1;
	qu->arr = (int*)malloc(sizeof(int)*qu->capacity);
	return qu;
}

int isFull(Queue *qu){
	return qu->capacity==qu->size;
}
int isEmpty(Queue *qu){
	return qu->size==0;
}
int front(Queue *qu){
	if(isEmpty(qu))
		cout<<"Queue is Empty";
	return qu->arr[qu->front];
}

int rear(Queue *qu){
	if(isEmpty(qu))
		cout<<"Queue is Empty";
	return qu->arr[qu->rear];
}

void enqueue(Queue *qu,int data){
	if(isFull(qu)){
		cout<<"Queue is Full";
		return ;
		}
	qu->rear = (qu->rear+1)%qu->capacity;
	qu->arr[qu->rear]=data;
	
	qu->size=qu->size+1;
}
int 	dequeue(Queue *qu){
	if(isEmpty(qu))
		{
		cout<<"empty Queue";
		return INT_MIN;
		}
	int data = qu->arr[qu->front];
	qu->front = (qu->front+1)%qu->capacity;
	qu->size=qu->size-1;
	return data;
}
void display(Queue *qu){
	for(int i=0;i<qu->size;++i){
		cout<<qu->arr[(qu->front+i)%qu->capacity]<<" ";
		
	}cout<<endl;
}



int main(){

	int capacity,n;
	cin>>capacity>>n;
	Queue *queue = createQueue(capacity);
	for(int i=0;i<n;++i){
		int ele;
		cin>>ele;
		enqueue(queue,ele);
	}
	display(queue);
	cout<<"Dequeue element "<<dequeue(queue)<<endl;
	
	cout<<"front element is : "<<front(queue)<<endl;
	
	cout<<"Dequeue element "<<dequeue(queue)<<endl;
	enqueue(queue,100);
	display(queue);
	cout<<"rear element is : "<<rear(queue)<<endl;


return 0;

}
