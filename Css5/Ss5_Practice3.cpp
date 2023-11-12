#include<stdio.h>
int main(){
	int mins,price;
	printf("Nhap vao so phut su dung: ");
	scanf("%d",&mins);
	if(mins<=50){
		price = mins*600+25000;
	} else if(mins<=200){
		price = (mins-50)*400+50*600+25000;
	} else if(mins<=400){
		price = (mins-200)*200+150*400+50*600+25000;
	} else {
		price = (mins-400)*100+200*200+150*400+50*600+25000;
	}
	printf("Gia tien su dung la: %d VND",price);
}
