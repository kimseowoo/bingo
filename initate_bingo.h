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
	int x,y,n,m;				//�±�ȯ�� �迭 ���� 
	int temp; 			    	//�±�ȯ�� ���� �ӽ� ���� 
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			s[i][j] = count++;
		}	
	}									//1-N*N  ������ �迭 
	
	for(i=0; i<100; i++)
	{
		x=rand()%N;
		y=rand()%N;
		n=rand()%N;
		m=rand()%N;
		
		temp=s[x][y];
		s[x][y]=s[n][m];
		s[n][m]=temp;
	}									//100�� �±�ȯ�Ͽ� ���� �������� ���� 


	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",s[i][j]);
		}
			printf("\n");
	}									//������ ��� 
}
