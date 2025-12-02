#pragma once
#include <iostream>

/**
 * @brief Calculates the length of a C-style string.
 *
 * Traverses the string character by character until the null terminator ('\0')
 * is encountered. This function does not modify the input string.
 *
 * @param str Pointer to a null-terminated C-style string.
 *            Must not be nullptr.
 * @return The number of characters before the null terminator.
 *
 * @note Passing a nullptr results in undefined behavior.
 * @example
 * const char* text = "Hello";
 * size_t len = StrLen(text); // len = 5
 */
size_t StrLen(const char* str);

/**
 * @brief Calculates the length of a std::string.
 *
 * Iterates through the internal character buffer of the std::string until
 * the null terminator is reached. This function demonstrates pointer-based
 * traversal, but for production code prefer std::string::size().
 *
 * @param str A reference to a std::string object.
 * @return The number of characters in the string.
 *
 * @example
 * std::string text = "World";
 * size_t len = StrLen(text); // len = 5
 */
size_t StrLen(const std::string& str);

/**
 * @brief Compares two C-style strings for equality.
 *
 * Traverses both strings character by character using pointers.
 * Returns true if both strings contain the same sequence of characters
 * and terminate at the same position.
 *
 * @param str1 Pointer to the first null-terminated C-style string.
 * @param str2 Pointer to the second null-terminated C-style string.
 * @return true if the strings are equal, false otherwise.
 *
 * @note Passing nullptr results in undefined behavior.
 * @example
 * const char* a = "Hello";
 * const char* b = "Hello";
 * bool equal = StrCmp(a, b); // true
 */
bool StrCmp(const char* str1, const char* str2);

/**
 * @brief Compares two std::string objects for equality using pointer traversal.
 *
 * Uses c_str() to access the internal buffer of each string and compares
 * them character by character until the null terminator.
 *
 * @param str1 Reference to the first std::string.
 * @param str2 Reference to the second std::string.
 * @return true if the strings are equal, false otherwise.
 *
 * @example
 * std::string a = "World";
 * std::string b = "World";
 * bool equal = StrCmp(a, b); // true
 */
bool StrCmp(const std::string& str1, const std::string& str2);