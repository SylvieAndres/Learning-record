#include<stdio.h>
int main() 
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	int i,j;
	printf("����a:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
			b[j][i]=a[i][j];//���л��� 
		}
	}
	printf("\n����b:\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		printf("%d",b[j][i]);
	}
	return 0; 
}
