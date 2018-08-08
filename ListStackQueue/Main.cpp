#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;
void testList(List<int>*l) {
	l->insert(1);
	l->eject();
	l->insert(2);
	l->insert(5);
	l->insert(8);
	l->display();
	l->eject();
	l->display();
	l->eject();
	l->eject();
	l->eject();
	l->eject();
	l->display();
}
int main() {
	List<int> *l = new Stack<int>;
	cout << "Stack:\n"; testList(l);
	l = new Queue<int>;
	cout << "Queue:\n"; testList(l);
	system("pause");
}
