#include<stdio.h>
struct Score{
	int maSv;
	float scoreaMath;
	float scoreLiter;
};
int main(){
	struct Score dsDiemthi[5];
	for(int i=0;i<5;i++){
		printf("Nhap ma sinh vien: ");
		scanf("%d",&dsDiemthi[i].maSv);
		printf("Nhap diem toan: ");
		scanf("%f",&dsDiemthi[i].scoreMath);
		printf("Nhap diem Van: ");
		scanf("%f",&dsDiemthi[i].scoreLiter);
	}
