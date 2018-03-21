#include "node.h"
#include <iostream>
#include <memory>

int main()
{
	auto a = std::make_unique<Node>();
	a->print();
	auto b = std::make_unique<Node>(a.get());
	b->print();
}
