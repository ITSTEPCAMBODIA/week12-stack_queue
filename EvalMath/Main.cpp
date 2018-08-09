#include<iostream>
#include<string>
using namespace std;
double calculate(string s);
int main() {
	string str;
	cout << "Input math expression: "; cin >> str;
	cout << "Calculating expression \""<<str<<"\"...\n";

	calculate(str);

	system("pause");
}

double calculate(string s)
{
	return 0.0;
}
