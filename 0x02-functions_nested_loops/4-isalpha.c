#include "main.h"

/**
 * _isalpha - check for alphabet letter
 * @c: a charter to be checked on
 * Return: returns 0 or 1 depanding on the condtion
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
