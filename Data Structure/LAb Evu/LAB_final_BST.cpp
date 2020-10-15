#include <iostream>

class Node{
public:
  int data;
  Node*left;
  Node*right;
};
Node*root=NULL;

void leafNode(Node* cNode,int key);

void insert(int key){
	Node* cNode=root;
	Node* nNode=new Node;
	nNode->data=key;
	nNode->left=NULL;
	nNode->right=NULL;
	if(root==NULL){
		root=nNode;
	}
	else{
		leafNode(root,key);
	}
}

void leafNode(Node* cNode,int key){
	Node* nNode=new Node;
	nNode->data=key;
	nNode->left=NULL;
	nNode->right=NULL;
	if(key < cNode->data){
		if(cNode->left==NULL){
			cNode->left=nNode;
		}
		else{
			leafNode(cNode->left,key);
		}
	}
	else if(key > cNode->data){
		if(cNode->right==NULL){
			cNode->right=nNode;
		}
		else{
			leafNode(cNode->right,key);
		}
	}
}

void inOrder(Node*cNode){
  if(cNode!=NULL){
    inOrder(cNode->left);
    std::cout << cNode->data << '\t';
    inOrder(cNode->right);
  }
}

main(){
  insert(20);
  insert(30);
  insert(15);
  insert(45);
  insert(63);
  insert(12);
  insert(78);
  insert(90);
  inOrder(root);
}
