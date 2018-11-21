#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int process_bingo(int input)
{
	int i,j;
	int s[N][N];
	int max=N*N;
		
	for(i=0; i<max; i++)
	{
		for(j=0; j<max; j++)
		{
			if(s[i][j]==input)
			{
				s[i][j]=-1;
				return 0;
			}
		}
	}
		
}
	
	
	


