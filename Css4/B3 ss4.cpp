#include<stdio.h>;
int main(){
	int indexold, indexnew;
	printf("Nhap chi so cu, chi so moi: ");
	scanf("%d %d",&indexold,&indexnew);
	int sodien = indexnew - indexold;
	printf("So dien la: %d so\n");
	if(sodien>=0 && sodien<50 ){
		printf("In ra tien dien la: %d VND",sodien*10000);
	} else if(sodien>=50 && sodien<100){
		printf("In ra tien dien la: %d VND",sodien*15000);
	} else if(sodien>=100 && sodien<150){
		printf("In ra tien dien la: %d VND",sodien*20000);
	} else if(sodien>=150 && sodien<200){
		printf("In ra tien dien la: %d VND",sodien*25000);
	} else {
		printf("In ra tien dien la: %d VND",sodien*30000);
	}
}
	
	
