#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int get_number_byMe()
{
	int i,j;
	int s[N][N];
	int max=N*N;
	int input;
		
	printf("input a number : ");
	
	while(1)
	{	
		scanf("%d",&input);

		if(input<1||input>N*N)
		{
			printf("retry : ");
		
			continue;	
		}
		else
			process_bingo(input);
					
	}
		return input;
}

