#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#include "initate_bingo2.h"
#include "get_number_byMe.h"

#define N 7

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
	
	
}


	


	
	
	


