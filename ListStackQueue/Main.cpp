#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
	cout << "hello teacher i am sakal\n";
	List<int> *l = new Stack<int>;
	l->insert(1);
	l->eject();
	l->insert(2);
	l->insert(3);
	l->insert(3);
	l->eject();
	l->insert(4);

}