#include<stdio.h>
int main(){
	float length,height;
	printf("Nhap chieu dai va chieu rong cua hcn: ");
	scanf("%f %f",&length,&height);
	float area=length*height;
	float perimeter=(length+height)*2;
	printf("Dien tich hcn la: %.1f va chi vi hcn la: %.1f",area,perimeter);
}
