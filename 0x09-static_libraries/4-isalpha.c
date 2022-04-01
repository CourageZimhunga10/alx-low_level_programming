/**
 * _isalpha - checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return:  1 if character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	int r = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		r = 1;

	return  (r);
}
