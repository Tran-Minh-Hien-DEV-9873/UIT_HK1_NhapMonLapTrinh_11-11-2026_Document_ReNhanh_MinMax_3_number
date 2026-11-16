#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	int max;
	int min;
	
	printf("a : ");
	scanf("%d", &a);
	
	printf("b : ");
	scanf("%d", &b);
	
	printf("c : ");
	scanf("%d", &c);
	
	max = a;
	if( max < b)
	{
		max = b;
	}
	if( max < c)
	{
		max = c;
	}	
	
	
	min = a;
	if( min > b)
	{
		min = b;
	}
	if( min > c)
	{
		min = c;
	}	
		
	printf("Max : %d \n", max);
	printf("Min : %d \n", min);
	
	
	return 0;
}
