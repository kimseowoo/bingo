#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initate_bingo(void) {

	int i,j;
	int s[3][3]={
	
		{1, 2, 3},
		{4, 5 ,6},
		{7, 8, 9}};		//������ �迭 �ʱ�ȭ 


	return 0;
}

int print_bingo(void){
	
	int N;			//������ ũ�� 
	int s[N][N];	
	int i,j;
	
	N=7;
	
	int max=N*N;
	 		
	for (i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d ",rand()%max);
			printf("\n");
	}
	printf("\n");						
	
}//���� ĭ�� �������� ä�� 

int main(void){
	
	print_bingo();
	
	int i;
	
	printf("���ڸ� �����ϼ��� : ");
	scanf("%d",&i);
	printf("\n"); 
	
	printf("��ǻ�� ���ڸ� �����ϼ��� : %d",rand()%100);
}
	

