#pragma once
template<class T> class List
{
protected: 
	T * ts;// array of elements
	int count;
public:
	List();
	virtual ~List();
	virtual void insert(T t) = 0;
	virtual void eject() = 0;
	virtual void display();
};

template<class T>
inline List<T>::List()
{
	ts = NULL;
	count = 0;
}

template<class T>
inline List<T>::~List()
{
	if (ts != NULL) {
		delete[] ts;
		count = 0;
	}
}

template<class T>
inline void List<T>::display()
{
	for (int i = 0; i < count; i++) cout << ts[i] << ' ';
	cout << endl;
}
