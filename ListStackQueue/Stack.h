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
	T *tmp = this->ts;
	this->ts = new T[this->count + 1];
	for (int i = 0; i < this->count; i++)
		this->ts[i] = tmp[i];
	this->ts[this->count] = t;
	this->count++;
	if (tmp)
		delete[] tmp;
}

template<class T>
inline void Stack<T>::eject()
{
	if (this->count > 0) {
		T *temp = new T [this->count - 1];
		for (int i = 0; i < this->count - 1; i++)		temp[i] = this->ts[i];
		delete[]this->ts;
		this->ts = temp;
		this->count--;
	}
}

