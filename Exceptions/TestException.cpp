#include<iostream>
using namespace std;
void addition(int a, int b) {
	if (b == 0) throw 0;
	if (b > a) throw "b must be smaller than a.\n";
	int z = a / b;
	cout << "Result: " << z << endl;
}
int main() {
	int a, b;
	cout << "Input a b: "; cin >> a >> b;
	//addition(a, b);
	try {
		//addition(a, b);
		int z = a + b;
		throw 2/2.0f;
	}
	catch (int c) {
		cout << "Division by " << c << endl;
		//throw;
	}
	catch (char*str) {
		cout << "ERROR: "<<b<<" should be less than "<<a<<endl;
	}
	catch (...) {
		cout << "Some Error.";
	}
	system("pause");
}