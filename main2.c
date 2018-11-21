#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initate_bingo.h"
#include "initate_bingo2.h"
#include "get_number_byMe2.h"
#include "process_bingo2.h"
#include "get_number_byCom2.h"
#include "count_bingo.h"

#define N 7
#define M 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int s[N][N];

int main(int (*s)[N])
{	
	int Com[N][N];			//comºù°íÆÇ 
	int User[N][N];			//userºù°íÆÇ 
	int comcount;			//comºù°í ¼ö 
	int usercount;			//userºù°í ¼ö  
	int isturn=0;			// ´©°¡ ¼ýÀÚ¸¦ ¼±ÅÃÇÑ Â÷·ÊÀÎÁö	
	
	srand((unsigned int)time(NULL));
	
	initate_bingo(Com);
	initate_bingo(User);
	
	while(1)
	{
		usercount = count_bingo(User);
		comcount = count_bingo(Com);
		
		print_bingo(User);
		
		printf("User : %d\n",usercount);
		printf("Com : %d\n",comcount);
		
		if((usercount)>=M||(comcount)<M)
		{
			printf("user ½Â¸®!\n");
		}
		else if((usercount)=(comcount)=M)
		{
			printf("ºñ°å½À´Ï´Ù.\n");
		}
		else
		{
			printf("com ½Â¸®!\n");
		}
	}
	
	
	
		
}




