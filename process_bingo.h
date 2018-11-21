#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "get_number_byMe.h"
#include "get_number_byCom.h"

#define N 7

void process_bingo(int (*s)[N],int input)
{
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(s[i][j]==input)
			s[i][j]=-1;
		
		}	
	}						
		
}
	


