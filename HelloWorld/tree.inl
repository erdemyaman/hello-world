
template <typename T>
void Tree<T>::InsertNode(std::shared_ptr<Node<T>> node)
{
	if(!m_head)
		m_head = node;
	else
	{
		//TODO: implement
		;
	}
	
	std::cout << "Added Node id: "<< node->GetId() << std::endl;
}
