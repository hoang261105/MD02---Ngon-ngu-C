#include<stdio.h>
#include<string.h>
struct Sinhvien{
	char name[50];
	int maSv;
	float ava;
};
int main(){
	struct Sinhvien sv1;
	strcpy(sv1.name, "Nguyen Huy Hoang");
	sv1.maSv = 12345;
	sv1.ava = 9.0;
	printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", sv1.name);
    printf("Ma sinh vien: %d\n", sv1.maSv);
    printf("Diem trung binh: %.2f\n", sv1.ava);

    return 0;
}
	
