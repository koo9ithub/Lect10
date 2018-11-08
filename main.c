#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=365;
	int *ptr = &i;
	
	printf("address of i: %d\n", &i);
	printf("value of i: %d\n", i);
	
	printf("address of ptr: %d\n", ptr);
	printf("value of ptr: %d\n", *ptr);
	
	return 0;
}
