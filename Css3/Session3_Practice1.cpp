#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d",&number);
	int square = pow(number,2);
	printf("Binh phuong so nguyen la: %d\n",square);
}
