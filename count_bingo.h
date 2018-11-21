#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int count_bingo(int (*s)[N])
{
	int User[N][N];
	int Com[N][N];
	int i,j;
	int bingo=0;
	int x,y,z,w=0;
	
	for(i=0; i<N; i++)
		{ 	x=0;
		 	for(j=0; j<N; j++)
			{
				if(User[i][j]==-1)
				x++;					//가로빙고 수 체크 
				
				if(i=j)
				{
					if(User[i][j]==-1)
					z++;				// \대각선 수 체 
				}
				
				if((i+j)==4)
				{
					if(User[i][j]==-1)
					w++;				//  /대각선 수 체크 
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
				y++;					//세로빙고 수 체크 
				
				if(y==5)
				{
					bingo++;		// 
				}
			}
		}
		return bingo;
}
