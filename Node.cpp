#include "Node.h"
#include <iostream>
enum Color {RED,BLACK};
Node::Node(int input)
{
	this->value = input;
	this->left = nullptr;
	this->right = nullptr;
	this->height = 1;
	this->parent = nullptr;
	this->color = RED;
}

void Node::display()
{
	std::cout << this->value << " ";
}


