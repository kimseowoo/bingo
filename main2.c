#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#include "initate_bingo2.h"
#include "get_number_byMe.h"

#define N 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int s[N][N];	
	int input;
	
	int ComBingo[N][N];
	int UserBingo[N][N];
	
	printf("<ComBingo>\n");
	initate_bingo(ComBingo);
	printf("\n");
	
	printf("<UserBingo>\n");
	initate_bingo2(UserBingo);
	printf("\n");
	
	
	get_number_byMe();
	process_bingo();
	
	
}

void process_bingo()
{
	for(i=0; i<max; i++)
	{
		for(j=0; j<max; j++)
		{
			if(s[i][j]==input)
				s[i][j]=-1;
		}
	}
}



	


	
	
	


