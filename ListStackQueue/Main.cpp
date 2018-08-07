#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
	Stack <int> list;
	list.insert(3);
	list.insert(4);
	list.display();
	list.eject();
	list.display();
	list.insert(9);
	list.display();
	system("pause");
}