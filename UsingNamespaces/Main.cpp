#include<iostream>

namespace combat {
	void fire() {
		std::cout << "Shooting...\n";
	}
}
namespace exploration {
	void fire() {
		std::cout << "Lighting up...\n";
	}
}
int main() {
	combat::fire();
	exploration::fire();
	system("pause");
}