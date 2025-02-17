#include<stdio.h>
int main()
{
	int i;
	int f[20]={1,1};
	for(i=2;i<=19;i++)
	f[i]=f[i-1]+f[i-2];
	for(i=0;i<=19;i++)
	{
		if(i%4==0)  //每4个一行 
		printf("\n");
		printf("%12d",f[i]);
	}
	return 0; 
 } 
