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
	int Com[N][N];			//com빙고판 
	int User[N][N];			//user빙고판 
	int comcount;			//com빙고 수 
	int usercount;			//user빙고 수  
	int turn=!turn=0;			// 누가 숫자를 선택할 차례인지	
	
	
	srand((unsigned int)time(NULL));
	
	initate_bingo(Com);
	initate_bingo(User);
	
	
		if(turn=0)
		
			get_number_byMe();
		
		else
			get_number_byCom();
	
	 
	
	
	while(1)
	{
		usercount = count_bingo(User);
		comcount = count_bingo(Com);
		
		print_bingo(User);
		
		printf("User : %d\n",usercount);
		printf("Com : %d\n",comcount);
		
		if((usercount)>=M||(comcount)<M)
		{
			printf("user 승리!\n");
			break;
		}
		else if((usercount)=(comcount)=M)
		{
			printf("비겼습니다.\n");
			break;
		}
		else
		{
			printf("com 승리!\n");	
			break;						//com과 user의 빙고 수를 비교해서 결과 출력 
		}
		if(turn=0)
		
			get_number_byMe2();
			process_bingo2();			//turn=0 일땐 유저가 숫자입력 
		
		else
			get_number_byCom2();
			process_bingo2();			//turn=1 일땐 컴퓨터가 숫자입력
	}
	
	
		
}




