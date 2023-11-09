#include<stdio.h>
int main(){
	int num;
	printf("Nhap so nguyen: ");
	scanf("%d",&num);
	if(num%3==0 && num%5==0){
		printf("So nguyen chia het cho 3 va 5");
	} else {
		printf("So nguyen khong chia het cho 3 va 5");
	}
}
