#pragma once
#include "List.h"
template<class T> class Stack :
	public virtual List<T>
{
public:
	Stack();
	virtual ~Stack();
	virtual void insert(T t);//Pheaktra
	virtual void eject();//Kimly
};

template<class T> inline Stack<T>::Stack(){}
template<class T> inline Stack<T>::~Stack(){}

template<class T>
inline void Stack<T>::insert(T t)
{
	List <T> *tmp = ts;
	ts = new List<T>[count + 1];
	for (int i = 0; i < count; i++)
		ts[i] = tmp[i];
	ts[count] = t;
	count++;
	if (tmp)
		delete[] tmp;
}

template<class T>
inline void Stack<T>::eject()
{
	if (count > 0) {
		List <T> *temp = new List <T>[count - 1];
		for (int i = 0; i < count - 1; i++)		temp[i] = ts[i];
		delete[]ts;
		ts = &temp;
	}
}

