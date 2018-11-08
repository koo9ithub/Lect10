#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	return;
	
}

int main(int argc, char *argv[]) {
	
	int X=10;
	int Y=30;

	printf("X: %i, Y: %i\n", X, Y);
	
	swap(&X, &Y);
	printf("X: %i, Y: %i", X, Y);
	
	return 0;
}


