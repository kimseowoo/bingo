#include <stdio.h>
#include <stdlib.h>
# 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
void main()	
{
	
	int N;		
	int i,j=0;
	int max=N*N;
	int s[N][N];
	
	N=5;
	
	srand(time(NULL));
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		
			s[i][j] = 1+rand()%max;
	}
	
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%d",s[i][j]);
		}
			printf("\n");
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


