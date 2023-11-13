#include<stdio.h>
int main(){
	int sum=0;
	printf("Nhap vao cac so nguyen: ");
	int num=1;
	while(num!=0){
		scanf("%d",&num);
		if(num%2!=0){
			sum+=num;
		}
	}
	printf("Tong cac so le vua nhap la: %d\n",sum);
}
