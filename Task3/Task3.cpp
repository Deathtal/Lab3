#include <iostream>

void swap_sort(int* a, int* b, int* c, const bool& sort_asc) {
	if (sort_asc) {
		if (*a > *b) {
			int tb = *a;
			*a = *b;
			*b = tb;
		}
		if (*a > *c) {
			int tc = *a;
			*a = *c;
			*c = tc;
		}
		if (*b > * c) {
			int tc = *b;
			*b = *c;
			*c = tc;
		}
	}
	else {
		if (*a < * b) {
			int tb = *a;
			*a = *b;
			*b = tb;
		}
		if (*a < * c) {
			int tc = *a;
			*a = *c;
			*c = tc;
		}
		if (*b < * c) {
			int tc = *b;
			*b = *c;
			*c = tc;
		}
	}
}

int main() {
	int av = 0;
	int bv = 0;
	int cv = 0;
	int* a = &av;
	int* b = &bv;
	int* c = &cv;
	bool sort_asc = 0;

	while (true) {
		std::cout << "Enter a non-integer value to exit" << std::endl;

		std::cout << "Enter a value for a: ";
		std::cin >> *a;
		if (std::cin.fail()) {
			break;
		}
		std::cout << "Enter a value for b: ";
		std::cin >> *b;
		if (std::cin.fail()) {
			break;
		}
		std::cout << "Enter a value for c: ";
		std::cin >> *c;
		if (std::cin.fail()) {
			break;
		}

		std::cout << "Sort ascending/descending (1/0): ";
		std::cin >> sort_asc;
		if (std::cin.fail()) {
			break;
		}

		std::cout << "Before sorting: " << *a << ", " << *b << ", " << *c << std::endl;

		swap_sort(a, b, c, sort_asc);

		std::cout << "After sorting: " << *a << ", " << *b << ", " << *c << std::endl << std::endl;
	}
}