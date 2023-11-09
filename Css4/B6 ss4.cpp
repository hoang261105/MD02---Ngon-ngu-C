#include<stdio.h>;
int main(){
	int num1,num2,num3,temp;
	printf("Nhap 3 so: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	int max = num1;
	int min = num1;
    if(num1>num2){
    	num2=temp; num1=num2; temp=num1;
	}
	if(num1>num3){
		num3=temp; num1=num3; temp=num1;
	}
	if(num2>num3){
		num3=temp; num2=num3; temp=num2;
	}
	printf("Day so giam dan la: %d %d %d\n", num3, num2, num1);
}
	
