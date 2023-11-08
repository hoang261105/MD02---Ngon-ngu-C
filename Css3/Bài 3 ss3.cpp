#include<stdio.h>
int main(){
	int Toan, Van, Anh;
	printf("Nhap diem Toan: ");
	scanf("%d", &Toan);
	printf("Nhap diem Van: ");
	scanf("%d", &Van);
	printf("Nhap diem Anh: ");
	scanf("%d", &Anh);
	float Tong = Toan + Van + Anh;
	float Trungbinh = Tong/3;
	printf("Tong ba mon la %.2f\n",Tong);
	printf("Trung binh ba mon la %.2f\n",Trungbinh);
	return 0;
}
	
	
	
	
