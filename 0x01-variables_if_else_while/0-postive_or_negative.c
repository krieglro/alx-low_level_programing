include <stdlib.h>
include <time.h>

/*
 *
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0){
		printf("is zero");
	} else if(n==true){
		printf("is positive");
	} else{
		printf("is negative");
	}


}
