#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

void get_number_byMe()
{
	int s[N][N];
	int max=N*N;
	int input;
		
	printf("input a number : ");
	scanf("%d",&input);
	
	while(input<1||input>N*N)
	{
		printf("retry : ");
		scanf("%d",&input);
	}	
	
	input=-1;
}


