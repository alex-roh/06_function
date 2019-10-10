#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	
	int x = 2, y = 5;
	
	int sumTwoOutput = sumTwo(x, y);
	
	printf("%d + %d = %d\n", x, y, sumTwoOutput);
	
	int squareOutput = square(x);
	
	printf("%d^%d = %d\n", x, x, squareOutput);
	
	int getMaxOutput = get_max(x, y);
	
	printf("%d와 %d 중 %d가 더 크면 %d를 출력하고, %d가 더 크면 %d를 출력한다: %d\n", x, y, x, x, y, y, getMaxOutput);
	
	return 0;	
}

int sumTwo(int a, int b)
{
	int output;
	output = a + b;
	return output;	
}

int square(int n)
{
	return (n * n);
}

int get_max(int a, int b)
{
	if(a > b) return a;
	else return b;
}
