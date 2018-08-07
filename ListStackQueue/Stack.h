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
}

template<class T>
inline void Stack<T>::eject()
{
	cout << "test";
}
