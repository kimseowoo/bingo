#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define M 3


int count_bingo(int (*s)[N])
{
	
	int i,j;
	int bingo=0;
	int x,y,z,w=0;						//x=가로, y=세로, z=\대각선, w= /대각선 
	
	
	 
	for(i=0; i<N; i++)
		{ 	x=0;
		 	for(j=0; j<N; j++)
			{
				if(s[i][j]==-1)
				x++;					//가로빙고 수 체크 
				
				if(i=j)
				{
					if(s[i][j]==-1)
					z++;				// \대각선 수 체 
				}
				
				if((i+j)==N)
				{
					if(s[i][j]==-1)
					w++;				//  /대각선 수 체크 
				}
			}	
			if(x==N)					//가로에 -1이 N개이면 1빙고 
			{
				bingo++;
			}
		}

	for(j=0; j<N; j++)
		{ 	y=0;
		 	for(i=0; i<N; i++)
			{
				if(s[i][j]==-1)
				y++;					//세로빙고 수 체크 
				
				if(y==N)
				{
					bingo++;		// 세로에 -1이 N개이면 1빙고
				}
			}
		}
		return bingo;
}
