#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int s[N][N];		//N*N배열 선언 
	int i,j;
	int max=N*N;
	
	srand((unsigned)time(NULL));
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			printf("%d", 1+rand()%max);
	

	
		return 0;
}
	

