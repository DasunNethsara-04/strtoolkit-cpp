#include <iostream>
#include "strtoolkit.h"

int main() {
	const char text1[] = "Hello";

	// testing the StrLen() function with both C-styles strings and std::string
	std::cout << StrLen(text1) << std::endl;

	const char text2[] = "Hello";
	const std::string text3 = "Hello!";
	const std::string text4 = "Hell!";
	
	// testing the StrCmp() function with both C-styles strings and std::string
	std::cout << StrCmp(text1, text2) << std::endl;
	std::cout << StrCmp(text3, text4) << std::endl;

	return 0;
}