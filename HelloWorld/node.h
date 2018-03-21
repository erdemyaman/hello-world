#pragma once

template<typename T>
class Node
{
public:
	Node();
	Node(Node* parent);
	
	virtual ~Node();
	
	unsigned GetId() {return m_id;}
	void SetData(T data) {m_data = data;}
	T GetData() {return m_data;}
	
	//for tracing
	void Print(bool escape = true);
	
private:
	unsigned m_id;
	Node* m_parent;
	T m_data;
};

#include "node.inl"
