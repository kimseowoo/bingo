#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7
#define M 3


void initate_bingo(int (*s)[N])	
{
	srand((unsigned int)time(NULL));

	int i,j;
	int max=N*N;
	int count=1;
	int x,y,n,m;				//맞교환할 배열 변수 
	int temp; 			    	//맞교환할 수를 임시 보관 
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			s[i][j] = count++;
		}	
	}									//1-N*N  이차원 배열 
	
	for(i=0; i<100; i++)
	{
		x=rand()%N;
		y=rand()%N;
		n=rand()%N;
		m=rand()%N;
		
		temp=s[x][y];
		s[x][y]=s[n][m];
		s[n][m]=temp;
	}									//100번 맞교환하여 랜덤 빙고판을 만듦 


	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",s[i][j]);
		}
			printf("\n");
	}									//빙고판 출력 
}
