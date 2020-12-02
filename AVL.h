#pragma once
#include "Node.h"
class AVL
{
public:
	Node* root;
	AVL();
	Node* newNode(int key);
	int max(int a, int b);
	int height(Node* N);
	Node* rightRotate(Node* y);
	Node* leftRotate(Node* x);
	int getBalance(Node* N);
	Node* insert(Node* node, int key);
	Node* minValueNode(Node* node);
	Node* deleteNode(Node* root, int key);
	void preorder(Node* root);
	void inorder(Node* root);
	void postorder(Node* root);
};

