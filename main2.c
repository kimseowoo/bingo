#include <stdio.h>
#include <stdlib.h>
#define N 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	int i,j;
	int s[N][N];
	int max=N*N;
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		printf("%d \n",s[i][j]=1+rand()%max);
		
	}
	
}


