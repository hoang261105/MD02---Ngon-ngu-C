#include <stdio.h>
#include <stdlib.h>

struct BookInfo
{
    char tensach[50];
    int masach;
    char tacgia[50];
    int giatien;
    char theloai[20];
};
void shift1Book(struct BookInfo *book, int *n, int position){
	for(int i = position; i<*n-1;i++){
		book[i] = book[i+1];
	}
	(*n)--;
}
void deleteBook(struct BookInfo *book, int *n, int remove){
	int position = -1;
	for (int i = 0; i < *n; i++) {
        if (book[i].masach == remove) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        printf("Khong tim thay sach co ma %d.\n", remove);
        return;
    }
    shift1Book(book, n, position);
    printf("Sach da duoc xoa.\n");
}
void shiftBook(struct BookInfo *book, int *n, int position){
	for(int i = *n; i > position; i--) {
        book[i] = book[i-1];
    }
    (*n)++; 
}
void addBook(struct BookInfo *book, int *n, int position) {
    // Kiim tra vi trí hop le
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    // Di chuyen các sách sau vi trí duoc chèn
    shiftBook(book, n, position);

    // Nhap thông tin sách moi
    printf("Nhap thong tin sach:\n");
    printf("Nhap ten sach: ");
    scanf("\n");
    gets(book[position].tensach);
    printf("Nhap ma sach: ");
    scanf("%d", &book[position].masach);
    printf("Nhap tac gia: ");
    scanf("%s", book[position].tacgia);
    printf("Nhap gia tien: ");
    scanf("%d", &book[position].giatien);
    printf("Nhap the loai: ");
    scanf("\n");
    gets(book[position].theloai);

    printf("Sach da duoc them vao vi tri %d.\n", position);
}
void bookInfo(struct BookInfo *book, int *n)
 {
    printf("Nhap thong tin sach:\n");
    for (int i = 0; i < *n; i++)
	 {
        printf("Nhap ten sach: ");
        scanf("\n");
        gets(book[i].tensach);
        printf("Nhap ma sach: ");
        scanf("%d", &book[i].masach);
        printf("Nhap tac gia: ");
        scanf("%s", book[i].tacgia);
        printf("Nhap gia tien: ");
        scanf("%d", &book[i].giatien);
        printf("Nhap the loai: ");
        scanf("\n");
        gets(book[i].theloai);
    }
}

void bookExp(struct BookInfo *book, int *n) 
{
    printf("Thong tin sach:\n");
    for (int i = 0; i < *n; i++) 
	{
        printf("Ten sach: %s\n", book[i].tensach);
        printf("Ma sach: %d\n", book[i].masach);
        printf("Tac gia: %s\n", book[i].tacgia);
        printf("Gia tien: %d\n", book[i].giatien);
        printf("The loai: %s\n", book[i].theloai);
    }
}
void cap_nhat_sach(struct BookInfo *books, int n, int ma) {
    for (int i = 0; i < n; i++) {
        if (books[i].masach == ma) {
            printf("Nhap thong tin moi cho sach:\n");
            printf("Nhap ten sach: ");
            scanf("%s", books[i].tensach);
            printf("Nhap tac gia sach: ");
            scanf("%s", books[i].tacgia);
            printf("Nhap gia tien sach: ");
            scanf("%d", &books[i].giatien);
            printf("Nhap the loai sach: ");
            scanf("%s", books[i].theloai);
            printf("Da cap nhat thong tin cho sach co ma %d.\n", ma);
            return;
        }
    }
    printf("Khong tim thay sach co ma %d.\n", ma);
}
void sap_xep_gia(struct BookInfo *books, int n) {
    struct BookInfo temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].giatien > books[j + 1].giatien) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep sach theo gia tang dan.\n");
}
void tim_kiem_ten(struct BookInfo *books, int n, char *ten) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].tensach, ten) == 0) {
            printf("Thong tin sach co ten %s:\n", ten);
            printf("Ma sach: %d\n", books[i].masach);
            printf("Ten sach: %s\n", books[i].tensach);
            printf("Tac gia sach: %s\n", books[i].tacgia);
            printf("Gia tien sach: %d\n", books[i].giatien);
            printf("The loai sach: %s\n", books[i].theloai);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach co ten %s.\n", ten);
    }
}
void tim_kiem_gia(struct BookInfo *books, int n, int gia_min, int gia_max) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (books[i].giatien >= gia_min && books[i].giatien <= gia_max) {
            if (!found) {
                printf("Danh sach sach trong khoang gia %d - %d:\n", gia_min, gia_max);
            }
            printf("Thong tin sach thu %d:\n", i + 1);
            printf("Ma sach: %d\n", books[i].masach);
            printf("Ten sach: %s\n", books[i].tensach);
            printf("Tac gia sach: %s\n", books[i].tacgia);
            printf("Gia tien sach: %d\n", books[i].giatien);
            printf("The loai sach: %s\n", books[i].theloai);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach trong khoang gia %d - %d.\n", gia_min, gia_max);
    }
}
int main() {
    struct BookInfo book[100];  
    int n,ma;
    char ten[50];
    int *ptrN = &n;
    int add,remove;
    int gia_min,gia_max;
    do {
        printf("**************************MENU**********************\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin theo ma sach\n");
        printf("6. Sap xep sach theo gia tang va giam\n");
        printf("7. Tim kiem sach theo ma sach\n");
        printf("8. Tim kiem sach theo khoang gia\n");
        printf("9. Thoat\n");
        printf("Lua chon cua ban: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &n);
                bookInfo(book, ptrN);
                break;
            case 2:
                bookExp(book, ptrN);
                break;
            case 3:
                printf("Nhap vi tri muon them: ");
                scanf("%d",&add);
                addBook(book,ptrN,add);
                break;
            case 4:
            	printf("Nhap ma sach muon xoa: ");
            	scanf("%d",&remove);
            	deleteBook(book,ptrN,remove);
            	break;
            case 5:
            	printf("Nhap ma sach can cap nhat: ");
                scanf("%d", &ma);
                cap_nhat_sach(book, n, ma);
            	break;
            case 6:
                sap_xep_gia(book, n);
                break;
            case 7:
            	printf("Nhap ten sach can tim: ");
                scanf("%s", ten);
                tim_kiem_ten(book, n, ten);
                break;
            case 8:
            	printf("Nhap gia thap nhat: ");
                scanf("%d", &gia_min);
                printf("Nhap gia cao nhat: ");
                scanf("%d", &gia_max);
                tim_kiem_gia(book, n, gia_min, gia_max);
                break;
            case 9:
            	exit(0);
            default:
            	printf("Lua chon khong hop le!!");
            	break;
        }
    } while (1 == 1);

    return 0;
}
