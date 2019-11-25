#include <iostream>

unsigned int GetStringLength(const char* ptr) {
	unsigned int i = 0;
	for (; *(ptr + i) != '\0'; i++) {
	}
	return i;
}

int main() {
	char arr[] = "computer";
	char* ptr = arr;

	std::cout << "Length: " << GetStringLength(ptr) << std::endl;
}