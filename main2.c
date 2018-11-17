#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N;			//빙고의 크기 
	int s[N][N];	
	int i,j;

	N=7;
	
	int max=N*N;
	
		
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d ",1+rand()%max);
			printf("\n");
	
	}
	printf("\n");		
	return 0;
}
