#include "Structures.hpp"
#include <iostream>

void print_Person(const Person& P){
	std::cout << "Name: " << P.name << std::endl;
	std::cout << "Age: " << P.age << std::endl;
	std::cout << "Position: " << P.job << std::endl;
}
