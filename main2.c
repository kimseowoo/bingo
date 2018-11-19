#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7

 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int s[N][N];	
	
	int ComBingo[N][N];
	int UserBingo[N][N];
	
	printf("<ComBingo>\n");
	initate_bingo(ComBingo);
	printf("\n");
	
	printf("<UserBingo>\n");
	initate_bingo2(UserBingo);
	printf("\n");
	
	
	get_number_byMe();
}

void initate_bingo(int s[N][N])	
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


void initate_bingo2(int s[N][N])	
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
	
	for(i=0; i<200; i++)
	{
		x=rand()%N;
		y=rand()%N;
		n=rand()%N;
		m=rand()%N;
		
		temp=s[x][y];
		s[x][y]=s[n][m];
		s[n][m]=temp;
	}									//200�� �±�ȯ�Ͽ� ���� �������� ���� 


	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{		
			printf("%d ",s[i][j]);
		}
			printf("\n");
	}									//������ ��� 
}
	
	
void get_number_byMe()
{
	int s[N][N];
	int i,j;
	int max=N*N;
	int input=i;
		
	printf("input a number : ");
	scanf("%d",&i);
	
	for(i=0; i<N; i++) 
	{
		for(j=0; j<0; j++)
		{
			if (s[i][j] == input) 
			{
				s[i][j] = -1;
			}
		}
	}	
}

	
	
	


