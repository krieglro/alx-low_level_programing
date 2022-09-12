#include <stdio.h>
#include <stdlib.h>

int main()
{
	char lower = 'n';
	while (lower <= 'z')
	{
		if (lower == 't' || lower == 'q')
			++lower;
	   	        putchar(lower);
		        ++lower;
	}
	putchar('\n');

	return 0;
}
