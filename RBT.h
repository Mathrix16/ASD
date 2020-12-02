#pragma once
#include"Node.h"
class RBT
{
public:
	Node* root;
	void rotateLeft(Node*&, Node*&);
	void rotateRight(Node*&, Node*&);
	void fixViolation(Node*&, Node*&);
	RBT() { root = nullptr; }
	void insert(const int& n);
	void preorder(Node* root);
	void inorder(Node* root);
	void postorder(Node* root);
	void levelorder();
};

