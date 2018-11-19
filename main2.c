#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int s[N][N];
	
	initate_bingo(s);
	
}

void initate_bingo(int s[N][N])	
{
	
	long seed;
	int i,j=0;
	int temp[N*N];
	int tem;
		
	seed = time(NULL);
	srand(seed);
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			s[i][j] = 1+rand()%N*N;
	}							//·£´ýºù°íÆÇ »ý¼º 
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",s[i][j]);
		}
			printf("\n");
	}									//ºù°íÆÇ Ãâ·Â 
}


	
	
	
	
	
	
	
	
	
	
	
	


