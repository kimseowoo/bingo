#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int s[N][N];
	int z[N][N];
	
	printf("<컴퓨터 빙고판>\n");
	initate_bingo(s);
	printf("\n");
	
	printf("<유저 빙고판>\n");
	initate_bingo2(z);
	
}

void initate_bingo(int s[N][N])	
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
	}


	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",s[i][j]);
		}
			printf("\n");
	}									//빙고판 출력 
}
void initate_bingo2(int z[N][N])	
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
			z[i][j] = count++;
		}	
	}									//1-N*N  이차원 배열 
	
	for(i=0; i<100; i++)
	{
		x=rand()%N;
		y=rand()%N;
		n=rand()%N;
		m=rand()%N;
		
		temp=z[x][y];
		z[x][y]=z[n][m];
		z[n][m]=temp;
	}


	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",z[i][j]);
		}
			printf("\n");
	}									//빙고판 출력 
}



	
	
	
	
	
	
	
	
	


