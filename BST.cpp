#include "BST.h"

BST::BST()
{
	this->root = nullptr;
}

void BST::preorder(Node* p)
{
	if (p != nullptr)
	{
		p->display();
		preorder(p->left);
		preorder(p->right);
	}
}

void BST::inorder(Node* p)
{
	if (p != nullptr)
	{		
		inorder(p->left);
		p->display();
		inorder(p->right);
	}
}

void BST::postorder(Node* p)
{
	if (p != nullptr)
	{
		postorder(p->left);
		postorder(p->right);
		p->display();
	}
}

void BST::insert(int value)
{
	Node* s = new Node(value);
	Node* p;
	Node* prev;
	if (this->root==nullptr)
		this->root = s;
	else {
		p = this->root;
		prev = nullptr;
		while (p != nullptr) {
			prev = p;
			if (value < p->value)
				p = p->left;
			else
				p = p->right;
		}
		if (value < prev->value)
			prev->left = s;
		else
			prev->right = s;
	}
}

Node* BST::del(Node* root, int value)
{
			
		if (root == nullptr)
			return root;

		// If the key to be deleted is 
		// smaller than the root's
		// key, then it lies in left subtree
		if (value < root->value)
			root->left = del(root->left, value);

		// If the key to be deleted is
		// greater than the root's
		// key, then it lies in right subtree
		else if (value > root->value)
			root->right = del(root->right, value);

		// if key is same as root's key, then This is the node
		// to be deleted
		else {
			// node with only one child or no child
			if (root->left == nullptr) {
				Node* temp = root->right;
				delete root;
				return temp;
			}
			else if (root->right == nullptr) {
				Node* temp = root->left;
				delete root;
				return temp;
			}

			// node with two children: Get the inorder successor
			// (smallest in the right subtree)
			Node* support = root->right;
			Node* prev = support;
			while (support != nullptr)
			{
				prev = support;
				support = support->left;
			}
			Node* temp = prev;

			// Copy the inorder successor's content to this node
			root->value = temp->value;

			// Delete the inorder successor
			root->right = del(root->right, temp->value);
		}
		return root;
	
}


