/* gcc -Wall -pedantic -Werror _getenv_main.c _getenv.c _strcmp.c str_to_arr.c _strcomp.c _memcpy.c _strcpy.c -o getenv && valgrind ./getenv */
/* gcc -Wall -pedantic -Werror _getenv_main.c _getenv.c _strcmp.c -o getenv && valgrind ./getenv */
#include "_getenv.h"

int main(void)
{
/* 	_getenv("PATH");
	puts("\n");
	_getenv("PATH"); */
	printf("%s\n", _getenv("PATH"));
	printf("%s\n", _getenv("PATH"));

	return (0);
}