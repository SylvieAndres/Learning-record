#include<stdio.h> 
int main()
{
	int i;
	float avg=0.0;
	float a[10]={1.2,7,5,1.8,1.6,0.8,4,1.0,6,2.2};
	float sum=0.0;
	for(i=0;i<10;i++){
		sum+=a[i];
	}
	avg=sum/10;
	printf("avg=%f\n",avg);
	
	for(i=0;i<10;i++){
		if(a[i]<avg){
			printf("%4.1f\n",a[i]);//宽度4，保留小数点后一位 
		}
	}
	return 0;
}
