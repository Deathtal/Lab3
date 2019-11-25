#include <iostream>

float avarage_salary(const float* salary_array) {
	float total = 0;
	unsigned int i = 1;
	for (; i <= salary_array[0]; i++) {
		total += *(salary_array + i);
	}
	return total / salary_array[0];
}

int main() {
	float* salary_array;
	int salaries_size;

	std::cout << "Enter the number of employees: ";
	std::cin >> salaries_size;

	salary_array = new float[salaries_size + 1];

	salary_array[0] = salaries_size;

	for (int i = 1; i <= salaries_size; i++) {
		std::cout << "Enter salary of employee number " << i << " in dollarydoos: ";
		std::cin >> salary_array[i];
	}
	
	std::cout << "Avarage salary of employees is: " << avarage_salary(salary_array) << " dollarydoos" << std::endl;

	delete[] salary_array;
}