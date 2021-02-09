
#include<iostream>
#include<conio.h>
using namespace std;
 
struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Function for Preorder traversal
void for_preorder(struct Node *root) {
	
	if(root == NULL) 
	  return;
	cout<<root->data; // Print data
	for_preorder(root->left);     // Visit left subtree
	
	for_preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void for_inorder(Node *root) {
	if(root == NULL) 
	return;
	for_inorder(root->left);       //Visit left subtree
	
	cout<<root->data;  //Print data
	
	for_inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void for_postorder(Node *root) {
	if(root == NULL) 
	 return;
	for_postorder(root->left);    // Visit left subtree
	
	for_postorder(root->right);   // Visit right subtree
	
	cout<<root->data; // Print data
}

// Function to Insert Node in a Binary Search Tree
Node* Insert_Node(Node *root,char data) {
	if(root == NULL) {
	
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
    
	}
    else if(data <= root->data)
	    
		root->left = Insert_Node(root->left,data);
	else
	    root->right = Insert_Node(root->right,data);
	return root;
}
 
int main() {

	Node* root = NULL;
	root = Insert_Node(root,'G'); 
	root = Insert_Node(root,'D');
	root = Insert_Node(root,'L'); 
	root = Insert_Node(root,'S'); 
	root = Insert_Node(root,'B'); 
	root = Insert_Node(root,'E');
 
	cout<<"Preorder Traversal: ";
	for_preorder(root);
	cout<<"\n";
	
	cout<<"Inorder Traversal: ";
	for_inorder(root);
	cout<<"\n";

	cout<<"Postorder Traversal: ";
	for_postorder(root);
	cout<<"\n";
	
	return 0;
}

