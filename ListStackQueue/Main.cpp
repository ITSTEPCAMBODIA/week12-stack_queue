#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
	cout << "Surprise mother f***";
	List<int> *l = new Stack<int>;
	l->insert(1);
	l->eject();
	l->insert(2);
	l->insert(5);
	l->insert(8);
	system("pause");
}
