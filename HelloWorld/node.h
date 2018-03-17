#pragma once

class Node
{
public:
	Node();
	Node(Node* parent);
	
	virtual ~Node();
	
	unsigned getId() {return m_id;}
	void setData(int data) {m_data = data;}
	
	
	void print(bool escape = true);
	
private:
	unsigned m_id;
	Node* m_parent;
	int m_data;
};
