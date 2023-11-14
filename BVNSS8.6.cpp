#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int number[n],i;
	for(i=0;i<n;i++)
	{
		printf("Nhap number[%d]=",i);
		scanf("%d",&number[i]);
    }
	int deleteIndex;
	printf("Nhap gia tri deleteIndex: ");
	scanf("%d",&deleteIndex);
	int new_number[n-1];
	for(i=0;i<deleteIndex;i++)
	{
		new_number[i]=number[i];
	}
	for(i=deleteIndex+1;i<n;i++)
	{
		new_number[i-1]=number[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",new_number[i]);
	}
	return 0;	
}
