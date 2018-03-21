#pragma once

#include "node.h"

#include <memory>

template <typename T>
class Tree
{
public:
	Tree() = default;
	virtual ~Tree() = default;

	void InsertNode(std::shared_ptr<Node<T>> node);
	bool RemoveNode(Node<T>&& node) {return true;}
	
private:
	std::shared_ptr<Node<T>> m_head;
};

#include "tree.inl"
