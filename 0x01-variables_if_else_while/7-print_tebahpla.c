#include <stdio.h>
#include <stdlib.h>

/*
 * main prints reverse alphabet
 */

int main(void)
{ 
	char lower = 'z';
	while(lower >= 'a'){
		putchar(lower);
		--lowe;
	}
	putchar('\n');
	return(0);
}
