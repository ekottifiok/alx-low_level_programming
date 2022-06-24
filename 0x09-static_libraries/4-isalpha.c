#include "main.h"

/* more headers goes there */
/**
 * _isalpha - Entry point
 * @c: the character to check
 * Return: 0 (Lowercase) or 1 (Uppercase)
 */
/* betty style doc for function main goes there */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
