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
	int addValue,addIndex;
	printf("Nhap gia tri addValue: ");
	scanf("%d",&addValue);
	printf("Nhap gia tri addIndex: ");
	scanf("%d",&addIndex);
	number[addIndex]=addValue;
	for(i=0;i<n;i++)
	{
		printf("%d\t",number[i]);
	}
}
