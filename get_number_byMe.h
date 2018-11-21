#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "process_bingo.h"

#define N 3

int get_number_byMe(int (*s)[N])
{
	int i,j;
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
		for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				if(s[i][j] == input);
			
				return input;
			else(ม฿บน)
			}	
		}							
		
	if						
	}
		return input;
}

