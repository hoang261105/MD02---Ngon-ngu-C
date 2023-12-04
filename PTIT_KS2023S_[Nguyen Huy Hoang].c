#include <stdio.h>
#include <stdlib.h>

struct SinhVien
{
    int id;
    char name[50];
    char birthday[50];
    char address[50];
    int status;
};
struct SinhVien studentList[100];
typedef struct SinhVien sv;
void output(sv studentList[], int i)
{
    printf("ID: %d\nName: %s\nBirthday: %s\nAddress: %s\nStatus:%d\n\n",
           studentList[i].id, studentList[i].name, studentList[i].birthday, studentList[i].address, studentList[i].status);
}
void input(sv studentList[], int i)
{
    printf("Nhap id: ");
    scanf("%d", &studentList[i].id);
    printf("Nhap Name: ");
    getchar();
    gets(studentList[i].name);

    printf("Nhap Birthday: ");
    gets(studentList[i].birthday);

    printf("Nhap Address: ");
    gets(studentList[i].address);

    printf("Nhap status: ");
    scanf("%d", &studentList[i].status);
    printf("\n");
}

int main(){
	int i,j;
	int lenStdList = 2;
    int count;
    struct SinhVien studentList[2] =
        {
            {1, "Hoang", "26/11/2005", "599 Nguyen Trai", 1},
            {2, "Trang", "15/6/2005", "Nguyen Van Troi", 0}};
	do{
		printf("1. In toan bo danh sach sinh vien co trong mang StudentList tren cung mot hang\n");
		printf("2. Them sinh vien vao vi tri cuoi cung\n");
		printf("3. Cap nhat thong tin cua sinh vien\n");
		printf("4. Xoa sinh vien\n");
		printf("5. sap xep va in ra danh sach sau khi sap xep\n");
		printf("6. Tim kiem va in ra thong tin sinh vien\n");
		printf("7. Tim kiem va in ra thong tin sinh vien theo status\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: ");
		
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 1:
			for ( i = 0; i < lenStdList; i++){
                output(studentList, i);
            }
				break;
			case 2:
				lenStdList++;
                input(studentList, lenStdList);
                
				break;
			case 3:
			printf("Nhap ten sinh vien muon thay doi thong tin: ");
            count = 0;
            char update_name[50];
            gets(update_name);
            for ( i = 0; i < lenStdList; i++)
            {
                if (strcmp(update_name, studentList[i].name) == 0)
                {
                    input(studentList, i);
                    count = 1;
                }
            }
            if (count == 0)
            {
                printf("Khong tim thay");
            }
				break;
			case 4:
			printf("Nhap ten sinh vien muon xoa: ");
            count = 0;
            char delete_name[50];
            gets(delete_name);
            for (i = 0; i < lenStdList; i++){
				if (strcmp(delete_name, studentList[i].name) == 0){
					for ( j = i; j < lenStdList - 1; j++){
                        studentList[j] = studentList[j + 1];
                    }
                    count = 1;
                }
            }
            if (count == 0){
                printf("Khong tim thay");
            }
				break;
			case 5:
			for (i = 0; i < lenStdList - 1; i++){
                for (j = 0; j < lenStdList - i - 1; j++){
                	if (studentList[j].name[0] > studentList[j + 1].name[0]){
					 sv temp = studentList[j];
					 studentList[j] = studentList[j + 1];
					 studentList[j + 1] = temp;
                    }
                }
            }
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				exit(0);
			default:
				printf("Vui long chon lai ");
		}
	}while ( 1 == 1);
}
