#include <stdio.h>
int main(){      //a=tien gui b=lai xuat c=tong tien d
	float a,b,c,d;
	int month;
	printf("Nhap so tien gui: \n");
	scanf("%f",&a);
	printf("Nhap lai suat : \n");
	scanf("%f",&b);
	printf("Nhap so thang gui : \n");
	scanf("%d",&month);
	b = b/ 100;
	d = a * b * (month/12); 
	c = a + d;
	printf("Tien lai la : %.2f \n", d);
	printf("Tong tien tiet kiem la : %.2f \n", c );
}
