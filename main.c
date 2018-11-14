#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int N;
	int i,j;
	int s[3][3]={
	
		{1, 2, 3},
		{4, 5 ,6},
		{7, 8, 9}};		//2차원 배열 초기화 


	 N=5;
	 		
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d ",s[i][j]);
		printf("\n");
	}
	
	
	
	return 0;
}
	

