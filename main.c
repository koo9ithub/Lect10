#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	int *ptr;
	
	ptr = &x;
	printf("value that pointer points: %d\n", *ptr);
	
	*ptr = 20;
	printf("value of x: %d\n", x);
	
	
	return 0;
}
