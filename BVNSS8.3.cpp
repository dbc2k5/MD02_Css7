#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int number[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("Nhap number[%d]=",i);
		scanf("%d",&number[i]);
	}
	int findNumber;
	printf("Nhap so findNumber:");
	scanf("%d",&findNumber);
	for(i=0;i<n;i++)
	{
		if(number[i]==findNumber)
		{
			printf("Phan tu co chi so %d bang findNumber\n",i);
			sum+=number[i];
		}
	}
	if(sum==0)
	{
		printf("Khong co phan tu nao bang findNUmber");
	}
	else printf("Tong cac so bang findNumber la %d",sum);
}
