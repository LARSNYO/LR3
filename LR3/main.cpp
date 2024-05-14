#include "include.h"


int main() {


	FractionNumber frac5;
	FractionNumber frac6;
	std::cin >> frac6;
	std::cin >> frac5;

	std::cout << "Fraction1: " << frac5 << std::endl;
	std::cout << "Fraction2: " << frac6 << std::endl;



	FractionNumber::displayCount();
	std::cout << std::endl;
	return 0;
}
