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

/**
 * @brief Copies a C-style string into another buffer.
 *
 * Traverses the source string character by character using pointers
 * and writes each character into the destination buffer until the
 * null terminator ('\0') is reached. The null terminator is also
 * copied to ensure the destination is a valid C-style string.
 *
 * @param src Pointer to the source null-terminated C-style string.
 *            Must not be nullptr.
 * @param dest Pointer to the destination buffer. Must be large enough
 *             to hold all characters from src including the null terminator.
 *
 * @note Passing nullptr or insufficient buffer size results in undefined behavior.
 * @example
 * char buffer[20];
 * StrCpy("Hello", buffer);
 * // buffer now contains "Hello"
 */
void StrCpy(const char* src, char* dest);

/**
 * @brief Copies the contents of one std::string into another using pointer traversal.
 *
 * Resizes the destination string to match the source string length,
 * then copies each character from the source into the destination
 * using pointers. The null terminator is managed automatically by
 * std::string and does not need to be copied manually.
 *
 * @param src Reference to the source std::string.
 * @param dest Reference to the destination std::string, which will be resized
 *             and overwritten with the contents of src.
 *
 * @example
 * std::string a = "World";
 * std::string b;
 * StrCpy(a, b);
 * // b now contains "World"
 */
void StrCpy(const std::string& src, std::string& dest);

/**
 * @brief Concatenates a C-style string onto another buffer.
 *
 * Appends the characters from the source string (src) to the end of the
 * destination string (dest). Traverses dest until its null terminator ('\0'),
 * then copies characters from src until its null terminator is reached.
 * Finally, writes a new null terminator at the end of dest.
 *
 * @param src Pointer to the source null-terminated C-style string.
 *            Must not be nullptr.
 * @param dest Pointer to the destination buffer containing a valid
 *             null-terminated C-style string. Must be large enough to hold
 *             the existing contents of dest plus all characters from src
 *             including the null terminator.
 *
 * @note Passing nullptr or insufficient buffer size results in undefined behavior.
 * @example
 * char buffer[20] = "Hello";
 * StrCat(" World", buffer);
 * // buffer now contains "Hello World"
 */

void StrCat(const char* src, char* dest);

/**
 * @brief Concatenates one std::string onto another.
 *
 * Appends the contents of the source string (src) to the destination string (dest).
 * Uses std::string's built-in memory management to ensure safe concatenation.
 *
 * @param src Reference to the source std::string.
 * @param dest Reference to the destination std::string, which will be extended
 *             to include the contents of src.
 *
 * @example
 * std::string a = "Hello";
 * std::string b = " World";
 * StrCat(b, a);
 * // a now contains "Hello World"
 */
void StrCat(const std::string& src, std::string& dest);

/**
 * @brief Locate the first occurrence of a character in a C-style string.
 *
 * This function searches the null-terminated string `str` for the first
 * occurrence of the character specified by `ch`. If found, it returns a
 * pointer to the matching character within the string. If the character
 * is not found, the function returns nullptr.
 *
 * @param str Pointer to a null-terminated C-style string to be searched.
 * @param ch  Character to locate, passed as an int but compared as an unsigned char.
 *
 * @return const char* Pointer to the first occurrence of `ch` in `str`,
 *         or nullptr if the character is not found.
 *
 * @note If `ch` is '\0', the function returns a pointer to the string's
 *       terminating null character.
 *
 * @example
 * const char* text = "Hello";
 * const char* result = StrChr(text, 'e');
 * // result points to "ello"
 * // *result == 'e'
 */
const char* StrChr(const char* str, int ch);

void StrRev(char* str);