#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int x;
	int y;
	
	x = 2;
	y = 5;
	square(x);
	
	printf("square : %i\n", x);
	
	return 0;	
}


void square(int n)
{
	n = n * n;
}
