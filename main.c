#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	// Combination을 계산하는 프로그램 
	
	int n;
	int r;
	
	printf("조합을 계산하는 프로그램입니다.\n");
	printf("n 값을 입력하세요: ");
	scanf("%d", &n);
	printf("r 값을 입력하세요: ");
	scanf("%d", &r);
		
	printf("C(%d, %d)의 값은 %d입니다.", n, r, combination(n, r));
	
	return 0;	
}

int combination(int n, int r){
	
	return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int factorial(int n)
{
	int i;
	int result = 1;
	
	for(i = 1; i <= n; i++)
		result = result * i;
	
	return result;
}

