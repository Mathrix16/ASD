#pragma once
#include "Node.h"
class BST
{
public:
	Node* root;
public:
	BST();
	void preorder(Node* p);
	void inorder(Node* p);
	void postorder(Node* p);
	void insert(int value);
	Node* del(Node* root, int value);
};

