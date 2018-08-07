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

