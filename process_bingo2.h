#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define M 3


void process_bingo(int (*s)[N],int input)
{
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(s[i][j]==input)
			s[i][j]=-1;
		
		}	
	}									//�Էµ� ���ڿ� �ش��ϴ� ����ĭ�� ���ڰ� -1�� �ٲ� 
		
}
