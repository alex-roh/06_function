#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	// Combination�� ����ϴ� ���α׷� 
	
	int n;
	int r;
	
	printf("������ ����ϴ� ���α׷��Դϴ�.\n");
	printf("n ���� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("r ���� �Է��ϼ���: ");
	scanf("%d", &r);
		
	printf("C(%d, %d)�� ���� %d�Դϴ�.", n, r, combination(n, r));
	
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

