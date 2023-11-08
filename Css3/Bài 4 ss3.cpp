#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Nhap num1: ");
	scanf("%d",&num1); 
	printf("Nhap num2: ");
	scanf("%d",&num2);
	printf("Nhap num3: ");
	scanf("%d",&num3);
	int max = num1;
	int min = num1;
	if(max<num2){
		max = num2;
	}
	if(max<num3){
		max = num3;
	}
	if(min>num2){
		min = num2;
	}
	if(min>num3){
		min = num3;
	}
	printf("Gia tri lon nhat la: %d\n",max);
	printf("Gia tri nho nhat la: %d",min);
}

