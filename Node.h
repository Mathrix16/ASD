#pragma once
class Node
{
public:
	int value;
	Node* right;
	Node* left;
	Node* parent;
	bool color;
	int height;
public:
	Node(int input);
	void display();	
};

