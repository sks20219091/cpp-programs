#include <bits/stdc++.h>


typedef struct *node{
	int data;
	node * left, *right;
	
	
}node;
node *createnode(int key){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = key;
	newnode->left = NULL;
	newnode->right = NULL;
	
	return newnode;
	
}

node *root = NULL;

node *insertnode{node *node,int key}{
	
	if(node==NULL)
	{
		node = createnode(key);
		return node;
	}

	if(key<node->data)
	node->left=insertnode(node->left,key);
	else if(key>node->data)
	node->right = insert(node->right,key);	
	
	return node;
	
}
void addnode(int key){
	root = insertnode(root,key);	
}




