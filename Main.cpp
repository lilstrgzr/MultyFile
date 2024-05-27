#include "Functions.h"
#include "Structures.hpp"
#include <iostream>
#include "Data.hpp"

int main() {
	setlocale(LC_ALL, "russian");
	int n;
	
	say_hi();
	std::cout << new_str(4, '!') << std::endl;

	const int size = 4;
	int arr[size]{ 5, 9, 15, 29 };
	print_arr(arr, size);

	Person p1{ "Jude Stones" , 25, "Manager" };
	print_Person(p1);

	_A = 7;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	print_arr(_ARR, _SIZE);



	return 0;
}