#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#include "initate_bingo2.h"
#include "get_number_byMe.h"
#include "process_bingo.h"
#include "get_number_byCom.h"
#include "count_bingo.h"

#define N 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int s[N][N];

int main(int (*s)[N])
{	
	
	
	int Com[N][N];
	int User[N][N];
	
	int input;
	
	printf("<Com>\n");
	initate_bingo(Com);
	printf("\n");
	
	printf("<User>\n");
	initate_bingo2(User);
	printf("\n");
	
	
	get_number_byMe();
		
}




