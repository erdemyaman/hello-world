#include <iostream>

static unsigned cur_id = 0;
static unsigned CreateId(){return cur_id++;}

template <typename T>
Node<T>::Node()
{
	m_id = CreateId();
	m_parent = nullptr;
}

template <typename T>
Node<T>::Node(Node<T>* parent)
{
	m_id = CreateId();
	m_parent = parent;
}

template <typename T>
Node<T>::~Node()
{
	std::cout << "Node " << m_id << " is dead!" << std::endl;
	
	m_id = 0;
}

template <typename T>
void Node<T>::Print(bool escape)
{
	std::cout << "id = " << m_id << ", parent= { ";
	if(m_parent)
		m_parent->Print(false);
	else
		std::cout << "NULL";
	std::cout << " }";
	
	if(escape) std::cout << std::endl;
}
