#include <cctype>
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

void StrCat(const char* src, char* dest) {
	const char* src_ptr = src;
	char* dest_ptr = dest;

	while (*dest_ptr != '\0') dest_ptr++;
	while (*src_ptr != '\0') {
		*dest_ptr = *src_ptr;
		++src_ptr;
		++dest_ptr;
	}
	*dest_ptr = '\0';
}

const char* StrChr(const char* str, int ch) {
	const char* ptr = str;
	while (*ptr != '\0') {
		if (*ptr == static_cast<unsigned char>(ch))
			return ptr;
		++ptr;
	}
	return nullptr;
}

void StrRev(char* str) {
	size_t len = StrLen(str);
	char* start = str;
	char* end = str + (len - 1);
	char temp{};

	while (start < end) {
		temp = *start;
		*start = *end;
		*end = temp;

		++start;
		--end;
	}
}

char get_upper(char c) {
	return std::toupper(static_cast<unsigned char>(c));
}

char get_lower(char c) {
	return std::tolower(static_cast<unsigned char>(c));
}

void ToUpper(char* str) {
	char* ptr = str;
	while (*ptr != '\0') {
		*ptr = get_upper(*ptr);
		++ptr;
	}
}

void ToLower(char* str) {
	char* ptr = str;
	while (*ptr != '\0') {
		*ptr = get_lower(*ptr);
		++ptr;
	}
}

void StrNCpy(char *dest, const char *src, const size_t n) {
    char *ptr1 = dest;
    const char *ptr2 = src;
    size_t i = 0;
	while (i < n && *ptr2 != '\0') {
		*ptr1 = *ptr2;
		++ptr1;
		++ptr2;
		++i;
	}
    *ptr1 = '\0';
}

void StrNCat(char* dest, const char* src, const size_t n) {
	char* ptr1 = dest;
	const char* ptr2 = src;
	size_t i = 0;
	while (*ptr1 != '\0') ptr1++;

	while (i < n && *ptr2 != '\0') {
		*ptr1 = *ptr2;
		++ptr1;
		++ptr2;
		++i;
	}
	*ptr1 = '\0';
}

bool StrNCmp(const char* str1, const char* str2, size_t n) {
	while (n--) {
		if (*str1 != *str2) return false;
		if (*str1 == '\0') return true;
		++str1;
		++str2;
	}
	return true;
}


