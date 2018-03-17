#include "node.h"
#include <iostream>

static unsigned cur_id = 0;
unsigned createId(){return cur_id++;}

Node::Node()
{
	m_id = createId();
	m_parent = nullptr;
}

Node::Node(Node* parent)
{
	m_id = createId();
	m_parent = parent;
}

Node::~Node()
{
	std::cout << "Node " << m_id << " is dead!" << std::endl;
	
	m_id = 0;
}

void Node::print(bool escape)
{
	std::cout << "id = " << m_id << ", parent= { ";
	if(m_parent)
		m_parent->print(false);
	else
		std::cout << "NULL";
	std::cout << " }";
	
	if(escape) std::cout << std::endl;
}

