#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#include "initate_bingo2.h"

#define N 3
#define M 2

int print_bingo(int (*s)[N])
{
	int i,j;
	
	for (i=0; j<N; j++)
		if(s[i][j]!=1)
		{
			printf("%&d",s[i][j]);
		}
			printf("\n\n");
}
