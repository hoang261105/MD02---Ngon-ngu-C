#include<stdio.h>
struct Student{
	char name[50];
	int age;
	int sdt[20];
	char email[50];
};
void studentInfo(struct Student *sv){
	printf("Nhap ho va ten: ");
	gets(sv->name);
	printf("Nhap tuoi: ");
	scanf("%d",&sv->age);
	printf("Nhap so dien thoai: ");
	scanf("%s",sv->sdt);
	printf("Nhap email: ");
	scanf("%s",sv->email);
}
void studentExp(struct Student sv){
	printf("Ho va ten: %s\n",sv.name);
	printf("Tuoi: %d\n",sv.age);
	printf("So dien thoai: %s\n",sv.sdt);
	printf("Email: %s",sv.email);
}
int main(){
	struct Student sv;
	printf("Thong tin sinh zien: \n");
	studentInfo(&sv);
	studentExp(sv);
}
	
	
