#include<stdio.h>
//�������������1��������������0
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
 	printf("������һ��������\n");
 	scanf("%d",&num);
 	int ret=IsPrimeNumber(num);//��ret��������
	if(ret==0){
		printf("%d��������",num);
	} 
	else{
		printf("%d������",num);
	}
	return 0;
 }
