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

/**
 * @brief Reverse a C-style string in place.
 *
 * This function reverses the order of characters in the null-terminated
 * string `str`. The reversal is performed in place, meaning the original
 * string is modified directly. The terminating null character remains
 * at the end of the reversed string.
 *
 * @param str Pointer to a null-terminated C-style string to be reversed.
 *
 * @return void No return value. The input string is modified directly.
 *
 * @note If `str` is empty or contains a single character, the function
 *       leaves it unchanged.
 *
 * @example
 * char text[] = "Hello";
 * StrRev(text);
 * // text now contains "olleH"
 */
void StrRev(char* str);

/**
 * @brief Converts all characters in a C-style string to uppercase.
 *
 * Traverses the string character by character using a pointer and
 * replaces each lowercase letter with its uppercase equivalent.
 * Non-alphabetic characters are left unchanged. The conversion
 * is done in-place, modifying the original string.
 *
 * @param str Pointer to a null-terminated C-style string.
 *            Must not be nullptr. The buffer must be writable.
 *
 * @note Passing nullptr results in undefined behavior.
 * @example
 * char buffer[] = "Hello World!";
 * ToUpper(buffer);
 * // buffer now contains "HELLO WORLD!"
 */
void ToUpper(char* str);

void ToLower(char* str);

/**
 * @brief Safely copies up to n characters from a C-style string into another buffer.
 *
 * Traverses the source string (src) character by character and writes each
 * character into the destination buffer (dest) until either n characters
 * have been copied or the null terminator ('\0') in src is reached.
 * Always writes a null terminator at the end of dest to ensure it is a
 * valid C-style string.
 *
 * @param dest Pointer to the destination buffer. Must be large enough to hold
 *             at least n characters plus the null terminator.
 * @param src Pointer to the source null-terminated C-style string. Must not be nullptr.
 * @param n Maximum number of characters to copy from src.
 *
 * @note Unlike the standard strncpy, this safe version always null-terminates
 *       the destination string and does not pad with additional '\0' characters.
 * @example
 * char buffer[10];
 * StrNCpy(buffer, "HelloWorld", 5);
 * // buffer now contains "Hello"
 */
void StrNCpy(char* dest, const char* src, const size_t n);

void StrNCat(char* dest, const char* src, const size_t n);

bool StrNCmp(const char* str1, const char* str2, size_t n);