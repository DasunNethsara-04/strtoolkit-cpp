#include "strtoolkit.h"

size_t StrLen(const char* str) {
	const char* ptr = str;
	size_t len = 0;
	
	while (*ptr != '\0') {
		len++;
		ptr++;
	}

	return len;
}

size_t StrLen(const std::string& str) {
	return 0;
}