#include <iostream>

void replace_chars(char* char_array, const char& search_char, const char& replace_char) {
	for (unsigned int i = 0; *(char_array + i) != '\0'; i++) {
		if (*(char_array + i) == search_char) {
			*(char_array + i) = replace_char;
		}
	}
}

int main() {
	char char_array[] = "Hejsan, jag heter Herman!";
	char search_char = ' ';
	char replace_char = '_';

	std::cout << "Before: " << char_array << std::endl;

	replace_chars(char_array, search_char, replace_char);

	std::cout << "After: " << char_array << std::endl;
}