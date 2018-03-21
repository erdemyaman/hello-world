#include "node.h"
#include "tree.h"

#include <iostream>
#include <memory>

int main()
{
	auto a = std::make_shared<Node<int>>();
	a->Print();
	auto b = std::make_shared<Node<int>>(a.get());
	b->Print();
	
	Tree<int> myTree;
	myTree.InsertNode(a);
}
