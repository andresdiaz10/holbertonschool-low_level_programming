#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
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
 * print_alphabet_x10 - Print the alphabet, in lowercase using _putchar 10
 */
void print_alphabet_x10(void);
/**
 * _islower - Checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase.
 * 0 otherwis.
 */
int _islower(int c);
/**
 * _isalpha - Checks for lower - upper case character
 * @c: Character to check
 *
 * Return: 1 if c is lower upper case character.
 * 0 otherwise.
 */
int _isalpha(int c);
/**
 * print_sign - Checks the sign of a number
 * @n: Number to check
 *
 * Return: 1 and print + if n is greater than zero.
 * 0 and prints 0 if n is zero.
 * otherwise returns -1 and prints -
 */
int print_sign(int n);
/**
 * _abs - Compute the absolute value of an integer
 * @n: Number to compute
 *
 * Return: absolute value of n
 */
int _abs(int n);
/**
 * print_last_digit - Print the last digit of a number
 * @n: Number
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n);
/**
 * jack_bauer - Print every minute of the day
 */
void jack_bauer(void);
#endif
