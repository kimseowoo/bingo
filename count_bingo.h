#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define M 3


int count_bingo(int (*s)[N])
{
	
	int i,j;
	int bingo=0;
	int x,y,z,w=0;						//x=����, y=����, z=\�밢��, w= /�밢�� 
	
	
	 
	for(i=0; i<N; i++)
		{ 	x=0;
		 	for(j=0; j<N; j++)
			{
				if(s[i][j]==-1)
				x++;					//���κ��� �� üũ 
				
				if(i=j)
				{
					if(s[i][j]==-1)
					z++;				// \�밢�� �� ü 
				}
				
				if((i+j)==N)
				{
					if(s[i][j]==-1)
					w++;				//  /�밢�� �� üũ 
				}
			}	
			if(x==N)					//���ο� -1�� N���̸� 1���� 
			{
				bingo++;
			}
		}

	for(j=0; j<N; j++)
		{ 	y=0;
		 	for(i=0; i<N; i++)
			{
				if(s[i][j]==-1)
				y++;					//���κ��� �� üũ 
				
				if(y==N)
				{
					bingo++;		// ���ο� -1�� N���̸� 1����
				}
			}
		}
		return bingo;
}
