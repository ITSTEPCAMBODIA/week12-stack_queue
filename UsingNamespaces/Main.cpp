#include<iostream>

void fire() {
	std::cout << "Chasing away...\n";
}

namespace combat {
	void fire() {
		std::cout << "Shooting...\n";
		::fire();
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
	fire();
	system("pause");
}