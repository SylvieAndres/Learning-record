#include<stdio.h>
//如果是素数返回1，不是素数返回0
int IsPrimeNumber(int num) 
{
	int i;
	if(num<=1)
	return 0;
	for(i=2;i<num;i++){
		if((num%i)==0)
		return 0;
	}
		return 1;
 } 
 
 
 int main()
 {
 	int num;
 	printf("请输入一个整数：\n");
 	scanf("%d",&num);
 	int ret=IsPrimeNumber(num);//用ret变量接收
	if(ret==0){
		printf("%d不是素数",num);
	} 
	else{
		printf("%d是素数",num);
	}
	return 0;
 }
