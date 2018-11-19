#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#define N 7

void initate_bingo();	
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
	print_bingo();
}




void get_number_byMe()
{
	int s[N][N];
	int i,j;
	int max=N*N;
	int input=i;
		
	printf("input a number : ");
	scanf("%d",&i);
}
void process_bingo(int input)
{
	int i,j;
	int s[N][N];
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

void print_bingo()
{
	

}
	
	
	


