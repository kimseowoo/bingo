#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initate_bingo(void) {

	int i,j;
	int s[3][3]={
	
		{1, 2, 3},
		{4, 5 ,6},
		{7, 8, 9}};		//이차원 배열 초기화 


	return 0;
}

int print_bingo(void){
	
	int N;			//빙고의 크기 
	int s[N][N];	
	int i,j;
	
	N=7;
	
	int max=N*N;
	 		
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d ",rand()%max);
			printf("\n");
	}
	printf("\n");						
	
}//빙고 칸을 랜덤으로 채움 

int main(void){
	
	print_bingo();
	
	int i;
	
	printf("숫자를 선택하세요 : ");
	scanf("%d",&i);
	printf("\n"); 
	
	printf("컴퓨터 숫자를 선택하세요 : %d",rand()%100);
}
	

