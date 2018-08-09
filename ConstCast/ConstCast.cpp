#include<iostream>
#include<ctime>
using namespace std;
void test_pow(const int*x) {
	int *t;
	t = const_cast<int*>(x);
	*t = *x * *x;
}
int main() {
	int x = 10;
	cout << "Before: " << x << endl;
	test_pow(&x);
	cout << "After: " << x << endl;
	volatile time_t t;
	time(&t);
	system("pause");
}