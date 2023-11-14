#include<stdio.h>
int main(){
	int i,n,number[n];
	printf("Nhap so n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap number[%d]=",i);
		scanf("%d",&number[i]);
	}
	int min=number[0];
	int max=number[0];
	for(i=1;i<n;i++)
	{
		if(min>number[i])
		{
			min=number[i];
		}
		if(max<number[i])
		{
			max=number[i];
		}
	}
	printf("So lon nhat la: %d. So nho nhat la: %d",max,min);
}
