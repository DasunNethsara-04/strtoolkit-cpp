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

	char deststr[20]{};
	std::string deststr2{};

	StrCpy(text2, deststr);

	std::cout << "Copied Text 1: " << deststr << std::endl;


	StrCpy(text3, deststr2);

	std::cout << "Copied Text 2: " << deststr2 << std::endl;

	return 0;
}