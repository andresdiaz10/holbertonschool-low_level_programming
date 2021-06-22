#ifndef _HOLBERTON1_H_
#define _HOLBERTON1_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned.
 */
int _putchar(char c);
/**
 * print_alphabet - Print the alphabet, in lowercase using _putchar
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - Print the alphabet, in lowercase using _putchar x10
 */
void print_alphabet_x10(void);
/**
 * _islower - Checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */
int _islower(int c);
#endif
