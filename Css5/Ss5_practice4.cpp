#include<stdio.h>
int main(){
	int NS,tEI,dm;
	printf("Nhap vao tong thu nhap: ");
	scanf("%d",&tEI);
	if(tEI>80){
		dm = tEI*1000000*35/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 35 phan tram va luong rong la: %d VND",NS);
	} else if(tEI>52 && tEI<=80){
		dm = tEI*1000000*30/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 30 phan tram va luong rong la: %d VND",NS);
	} else if(tEI>32 && tEI<=52){
		dm = tEI*1000000*25/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 25 phan tram va luong rong la: %d VND",NS);
	} else if(tEI>18 && tEI<=32){
		dm = tEI*1000000*20/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 20 phan tram va luong rong là: %d VND",NS);
	} else if(tEI>10 && tEI<=18){
		dm = tEI*1000000*15/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 15 phan tram va luong rong là: %d VND",NS);
	} else if(tEI>5 && tEI<=10){
		dm = tEI*1000000*10/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 10 phan tram va luong rong là: %d VND",NS);
	} else {
		dm = tEI*1000000*5/100;
		NS = tEI*1000000-dm;
		printf("Thue thu nhap la: 5 phan tram va luong rong là: %d VND",NS);
	}
}
		
		
	
