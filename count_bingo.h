#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int count_bingo(int (*s)[N])
{
	int User[N][N];
	int Com[N][N];
	int i,j;
	int bingo=0;
	int x, y,z,w=0;
	
	for(i=0; i<N; i++)
		{ 	x=0;
		 	for(j=0; j<N; j++)
			{
				if(User[i][j]==-1)
				x++;					//���κ��� �� üũ 
				
				if(i=j)
				{
					if(User[i][j]==-1)
					z++;				// 
				}
				
				if((i+j)==4)
				{
					if(User[i][j]==-1)
					w++;				// 
				}
			}	
			if(x==5)
			{
				bingo++;
			}
		}

	for(j=0; j<N; j++)
		{ 	y=0;
		 	for(i=0; i<N; i++)
			{
				if(User[i][j]==-1)
				y++;					//���κ��� �� üũ 
				
				if(y==5)
				{
					bingo++;		// 
				}
			}
		}
		return bingo;
}