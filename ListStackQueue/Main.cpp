#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
	cout << "Have change";
  cout << "Have change something";
	List<int> *l = new Stack<int>;
	l->insert(1);
	l->eject();
	l->insert(2);
	l->insert(5);
	l->insert(8);
}
