#include <iostream>

int main() {

	unsigned short shortZero = 0;

	// Seeding rand() function at current given time
	srand(time(NULL));

	const unsigned short countMax = 10;
	unsigned short array[countMax];

	unsigned short headsTotal = shortZero;

	const char* s1 = "Number of heads: ";
	const char* s2 = "Number of tails: ";
	const char* NL = "\n";



	for (unsigned short i = 0; i < countMax; i++) {
		unsigned short r = rand() % 2;
		
		switch (r == shortZero) {
			case true:	
				headsTotal++;
				break;
		}

		switch (i == (countMax - 1)) {
			case true:
				array[i] = r;
				std::cout << array[i];
				break;
			default:
				array[i] = r;
				std::cout << array[i] << std::endl;
				break;
		}
		
	}


	// If interpreting 0 as Heads, 1 as Tails:
	std::cout << NL << NL << s1 << headsTotal << NL;
	std::cout << s2 << (countMax - headsTotal);

	return 0;
}