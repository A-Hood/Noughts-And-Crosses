#include <iostream>
#include "Header.h"

void OutputField(std::string* ptrField)
{
	std::cout << "\n";
	std::cout << ptrField[0] << "|" << ptrField[1] << "|" << ptrField[2] << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << ptrField[3] << "|" << ptrField[4] << "|" << ptrField[5] << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << ptrField[6] << "|" << ptrField[7] << "|" << ptrField[8] << std::endl;
}