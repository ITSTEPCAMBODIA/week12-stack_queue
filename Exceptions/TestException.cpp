#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Input a b: "; cin >> a >> b;
	try {
		if (b == 0) throw 0;
		int z = a / b;
		cout << "Result: " << z << endl;
	}
	catch (int c) {
		cout << "Division by " << c << endl;
	}
}