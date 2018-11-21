#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define M 3


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
	}									//입력된 숫자에 해당하는 빙고칸의 숫자가 -1로 바뀜 
		
}
