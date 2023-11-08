#include<stdio.h>
int main(){
	int so,thousand,hundred,dozen,unit;
	printf("Nhap so\n ");
	scanf("%d",&so);
	unit = so%10;
	dozen = (so/10)%10;
	hundred = (so/100)%10;
	thousand = so/1000;
	printf("\nTong cua day so la: %d",unit+dozen+hundred+thousand);
	printf("\nDay so dao nguoc la: %d",unit*1000+dozen*100+hundred*10+thousand);
}
