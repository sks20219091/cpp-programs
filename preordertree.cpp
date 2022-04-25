#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
	int data;
	node *left , *right;
	node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
class binarytree{
    
    public:
    
    void preordertraversal(node *root){
        if(root!=NULL){
            cout<<root->data<<" ";
            preordertraversal(root->left);
            preordertraversal(root->right);
        }
    }
    void Inordertraversal(node *root){
    	if(root!=NULL){
    		Inordertraversal(root->left);
    		cout<<root->data<<" ";
    		Inordertraversal(root->right);
    	
    	}	
    
    }
    void postordertraversal(node *root){
        if(root!=NULL){
            postordertraversal(root->left);
            postordertraversal(root->right);
            cout<<root->data<<" ";
        }
    }
    void levelordertraversal(node *root){
        
        if(root==NULL)
        return ;
        queue <node*> qnode;
        qnode.push(root);
        while(!qnode.empty()){
            node *temp = qnode.front();
            qnode.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
               qnode.push(temp->left);
            }
            if(temp->right!=NULL) {
                qnode.push(temp->right);
            }
        }
    
    }
     int height(node *root){
     	if(root==NULL)
     	return 0;
     	
     	int l = height(root->left);
     	int r = height(root->right);
     	return max(l,r)+1;
     
     
     }
     int size(node * root){
         if(root==NULL)
         return 0;
         
         return (size(root->left)+size(root->right)+1);
     }
     
};
int main(){
    
    binarytree bt;
    node *root=NULL;
    root = new node(3);
    root->left = new node(4);
    root->right = new node(5);
    root->left->left = new node(2);
    root->left->right = new node(9);
    root->right->left = new node(8);
    root->right->right = new node(6);
    cout<<"preordertraversal :";
    bt.preordertraversal(root);
    cout<<endl;
    cout<<" Inordertraversal : ";
    bt.Inordertraversal(root);
    cout<<endl;
    cout<<" postordertraversal : ";
    bt.postordertraversal(root);
    cout<<endl;
    cout<<" levelordertraversal : ";
    bt.levelordertraversal(root);
    cout<<endl;
    
    cout<<"height of tree) is " ;
    cout<<bt.height(root);
    cout<<endl;
    
    cout<<"size  of tree) is " ;
    cout<<bt.size(root);
    
    
    return 0;
}
  
