#include <bits/stdc++.h>
using namespace std;

typedef struct stack{
	int capacity;
	int top;
	int *arr;
	
}Stack;

Stack *intialiasestack(int capacity){
	Stack *st = (Stack*)malloc(sizeof(Stack));
	st->capacity=capacity;
	st->top=-1;
	st->arr = (int*)malloc(sizeof(int)*capacity);
	return st;
}



int size(Stack *st){
	return st->top+1;
}

int isEmpty(Stack *st){
	return st->top==-1;
}
int isFull(Stack *st){
	return st->top+1==st->capacity;
}
void push(Stack *st,int data){
 	if(isFull(st)){
 		cout<<"Stack is Full";
 		return ;
 		}
 	
 	st->top=st->top+1;
 	st->arr[st->top]=data;
 		
 }
int pop(Stack *st){
	if(isEmpty(st)){
		cout<<"Stack is Empty";
		return -1;
	}
	int ele = st->arr[st->top];
	st->top=st->top-1;
	return ele;
	
}
int seek(Stack *st){
	if(isEmpty(st)){
		cout<<"Stack is Empty";
		return -1;
	}
	return st->arr[st->top];
}
int main(){
	
	int n,i,data,capacity;
	cin>>capacity>>n;
	Stack *st = intialiasestack(capacity);
	for(i=0;i<n;++i){
		cin>>data;
		push(st,data);
	}
	cout<<"top element is "<<seek(st)<<endl;
	
	cout<<"size of stack is  : "<<size(st)<<endl;
	
	if(isFull(st))
	cout<<"Stack is Full"<<endl;

	for(i=0;i<n;++i){
		cout<<pop(st)<<" ";
	}
	cout<<endl;
	if(isEmpty(st))
	cout<<"Stack is Empty"<<endl;
	if(isFull(st))
	cout<<"Stack is Full"<<endl;

return 0;
}


