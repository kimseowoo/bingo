#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int process_bingo(int(*s)[N], int input)			//�Է°��� -1�� �ٲ� 
{
	int i,j;
	int max=N*N;
		
	for(i=0; i<max; i++)
	{
		for(j=0; j<max; j++)
		{
			if(input==s[i][j])
				printf("%d",-1);
			
			else
				printf("%d",s[i][j]);
			
				
			
		
		}
	}
	return 0;
}
	
	
	


