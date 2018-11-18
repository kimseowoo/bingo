#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
void intate_bingo(int*bingo, int N)	
{
			
	int i,j, temp;
	int max=N*N;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			temp = 1+rand()%max;
		
			if(same_num(bingo, temp, N))
				j--;
			else
				bingo[i][j]=temp;
		}
	}
}

int same_num(int bingo, int temp, int N) 
{
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(bingo[i][j]==temp)
				return 1;
		}
	}
	
	return 0;
}

int get_number_byMe()
{	
	int i;
	
	printf("숫자를 선택하세요 : ");
	scanf("%d", &i);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


