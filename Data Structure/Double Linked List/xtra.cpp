#include <iostream>

class Node{
public:
	int data;
	Node *left;
	Node *right;
};
Node* root=NULL;


void leafNode(Node* cNode,int key){
	Node* nNode=new Node;
	nNode->data=key;
	nNode->left=NULL;
	nNode->right=NULL;
	if(key<cNode->data){
		if(cNode->left==NULL){
			cNode->left=nNode;
		}
		else{
			leafNode(cNode->left,key);
		}
	}
	else if(key>cNode->data){
		if(cNode->right==NULL){
			cNode->right=nNode;
		}
		else{
			leafNode(cNode->right,key);
		}
	}
}

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

leafSearch(Node* cNode,int key){
		if(key==cNode->data){
			std::cout <<key<< " Found " << '\n';
    }
		else if(key < cNode->data){
			if(cNode->left!=NULL){
				leafSearch(cNode->left,key);
			}
			else{
				std::cout << "Not Found !" << '\n';
			}
		}
		else if(key > cNode->data){
			if(cNode->right!=NULL){
				leafSearch(cNode->right,key);
			}
			else{
				std::cout << "Not Found !" << '\n';
			}
		}
}

void search(int key){
	Node* cNode=root;
	if(cNode->data==key){
		std::cout <<key<< " found " << '\n';
	}
	else{
		leafSearch(cNode,key);
	}
}

void display(){
  Node*cNode=root;
  while(cNode!=NULL){
    std::cout << cNode->data << '\n';
    cNode=cNode->right;
  }
}

main(){
	insert(10);
	insert(5);
	insert(15);
	insert(18);
	insert(2);
	insert(8);
	insert(12);
  insert(20);
	search(18);
  display();

}
