#pragma once
#include "List.h"
template<class T> class Queue :
	public List<T>
{
public:
	Queue();//dara
	virtual ~Queue();//dara
	virtual void insert(T t);//Sakal
	virtual void eject();//Da veat hello
};

template<class T>
inline Queue<T>::Queue(){}

template<class T>
inline Queue<T>::~Queue()
{
}

template<class T>
inline void Queue<T>::insert(T t)
{
	T *tmp = this->ts;
	this->ts = new T[this->count + 1];
	for (int i = 0; i < this->count; i++)this->ts[i] = tmp[i];
	this->ts[this->count] = t;
	this->count++;
	delete[]tmp;
}

template<class T>
inline void Queue<T>::eject()
{
	if (this->count > 0) {
		if (this->count == 1) {
			delete[]this->ts;
			this->ts = NULL;
		}
		else {
			T *tmp = this->ts;
			this->ts = new T[this->count - 1];
			for (int i = this->count - 1; i > 0; i--) this->ts[i - 1] = tmp[i];
			delete[]tmp;
		}
		this->count--;
	}
}
