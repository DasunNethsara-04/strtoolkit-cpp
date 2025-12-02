#include "strtoolkit.h"

/**
 * Implementation of StrLen for C-style strings.
 * Uses a pointer to traverse the string until '\0'.
 */
size_t StrLen(const char* str) {
	const char* ptr = str;
	size_t len = 0;

	while (*ptr != '\0') {
		++len;
		++ptr;
	}
	return len;
}

/**
 * Implementation of StrLen for std::string.
 * Uses c_str() to access the internal buffer and pointer traversal.
 */
size_t StrLen(const std::string& str) {
	size_t len = 0;
	const char* ptr = str.c_str();

	while (*ptr != '\0') {
		++len;
		++ptr;
	}
	return len;
}

/**
 * Implementation of StrCmp for C-style strings.
 * Compares character by character until both reach '\0'.
 */
bool StrCmp(const char* str1, const char* str2) {
	const char* str1ptr = str1;
	const char* str2ptr = str2;

	while(*str1ptr != '\0' && *str2ptr != '\0') {
		if (*str1ptr != *str2ptr) return false;
		++str1ptr;
		++str2ptr;
	}
	return *str1ptr == '\0' && *str2ptr == '\0';
}

/**
 * Implementation of StrCmp for std::string.
 * Uses c_str() to access internal buffer and compares via pointers.
*/
bool StrCmp(const std::string& str1, const std::string& str2) {
	const char* str1ptr = str1.c_str();
	const char* str2ptr = str2.c_str();

	while (*str1ptr != '\0' && *str2ptr != '\0') {
		if (*str1ptr != *str2ptr) return false;
		++str1ptr;
		++str2ptr;
	}
	return *str1ptr == '\0' && *str2ptr == '\0';
}

void StrCpy(const char* src, char* dest) {
	const char* ptr1 = src;
	char* ptr2 = dest;

	while (*ptr1 != '\0')
	{
		*ptr2 = *ptr1;
		++ptr1;
		++ptr2;
	}
	*ptr2 = '\0';
}

void StrCpy(const std::string& src, std::string& dest) {
	// this thing can easily can perform with dest = src.
	// This is just a code to practice and test my knowledge about pointers
	dest.resize(src.size());
	const char* ptr1 = src.c_str();
	char* ptr2 = &dest[0];

	while (*ptr1 != '\0')
	{
		*ptr2 = *ptr1;
		++ptr1;
		++ptr2;
	}
}