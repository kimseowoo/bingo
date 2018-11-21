#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

void get_number_byMe()
{
	int i,j;
	int s[N][N];
	int max=N*N;
	int input;
		
	printf("input a number : ");
	
	while(1)
	{	
		scanf("%d",&input);

		if(input<1||input>N*N)
		
			printf("retry : ");
			
			
		else
		{
			for(i=0; i<max; i++)
			{
				for(j=0; j<max; j++)
					if(s[i][j]==input)
					{
						s[i][j]=-1;
						break;
					}
					else
						printf("이미 입력된 숫자");
			}
		}
			
	
	}
}


