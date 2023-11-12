#include<stdio.h>;
int main(){
	int sales,acom;
	printf("Nhap doanh thu: ");
	scanf("%d",&sales);
	if(sales<=100){
		acom = sales*1000000*5/100;
		printf("Tien hoa hong dai ly la: %d VND",acom);
	} else if(sales<=300){
		acom = sales*1000000*10/100;
		printf("Tien hoa hong la: %d VND",acom);
	} else{
		acom = sales*1000000*20/100;
		printf("Tien hoa hong la: %d VND",acom);
	}
}
