//ѡ��
for(i=0;i<N-1;i++)
{
	k=i;
	for(j=i+1,j<N;j++)
	if(a[j]<a[k])
	k=j;
	if(k!=i)//Ԫ�ػ��� 
	{
		x=a[i];
		a[i]=a[k];
		a[k]=x;
	}
	return 0;
 } 
 
 
 //ð�ݷ�
 
 //���ַ�
 low=0;high=n-1;
 while(low<=high)
 {
 	mid=(low+high)/2;
 	if(x==a[mid])
 	break;
 	
 	else if(x<a[mid])
 	hugh=mid-1;
 	
 	else
 	low=mid+1;
 }
 if(low<=high)
 printf()//����
  
  
