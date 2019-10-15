#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n);

int main(int argc, char *argv[])
{
	
	int i;
	int max = 45;
	
//	srand((unsigned) 10); // 같은 정수를 넣으면 항상 같은 패턴이 나옴 
	srand((unsigned) time(NULL));
	
	for(i = 0; i < 6; i++)
		printf("%d\n", 1 + rand() % max);
	
	return 0;	
}

