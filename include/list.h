

#include <iostream>

template <class T>
class Node
{
	private:
	
	T data;
	Node<T> *next;

	public:

	Node(T d)
	{
		SetData(d);
		SetNext(NULL);
	}

	Node(T d, Node<T> *n)
	{
		SetData(d);
		SetNext(n);		
	}
	void SetData(T d)
	{
		data = d;
	}
	void SetNext(Node<T> *n)
	{
		next = n;
	}
	T GetData()
	{
		return data;
	}
	Node<T> * GetNext()
	{
		return next;
	}
};


template <class T>
class List
{
	private:
	
	Node<T> *head;
	Node<T> *tail;

	int size;

	public:
	
	List()
	{
		head = NULL;
		tail = NULL;
		size = 0;	
	}

	void AddSortElem(T d)
	{
		Node<T>*temp =  new Node<T>(d) ;

		if(size==0)
		{
			head = temp;
			tail = temp;
			size++;
			temp->SetNext(NULL);
			return;
		}

		Node<T> *curr = head;
		Node<T> *prevcur = head;

		while ( d < curr->GetData()) 
		{
			prevcur=curr;
			curr = curr->GetNext();
			if(curr == NULL)
				break;
		}

		prevcur->SetNext(temp);
		temp->SetNext(curr);
	}

	Node<T> *GetElm(int pos)
	{
	
		if((pos>size) && (pos<0)) 
			throw("выход за границы списка");
		Node<T> *curr = head;		
		for(int i=0; i<pos; i++)
		{
			curr = curr->GetNext();
		}
		return curr;
	}
};