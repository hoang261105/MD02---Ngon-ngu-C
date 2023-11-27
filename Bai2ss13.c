#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
	char n;
	int count;
	do{
		printf("************************MENU**********************\n");
		printf("1. Nhap vao chuoi ky tu\n");
		printf("2. In ra noi dung chuoi\n");
		printf("3. Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
		printf("4. Nhap vao 2 ky tu, thay the 2 ki tu trong chuoi thanh ky tu thu nhat\n");
		printf("5. Nhap vao 1 ki tu, xoa bo cac ky tu trong chuoi\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				str[100];
				printf("Nhap vao chuoi ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
				printf("Chuoi vua nhap la: ");
				printf("%s\n",str);
				break;
			case 3:
				count=0;
				printf("Nhap vao 1 ki tu bat ki: ");
			    scanf(" %c",&n);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==n){
						count++;
					}
				}
				if(count>0){
			     	printf("So lan xuat hien la: %d\n",count);
			    } else{
			    	printf("Ky tu khong co mat trong chuoi");
				}
				break;
			case 4:
				printf("Nhap vao 2 ky tu: ");
				scanf("%s",str);
				str[1]=str[0];
				printf("%s\n",str);
				break;
			case 5:
				printf("Nhap vao 1 ki tu can xoa: ");
			    scanf(" %c",&n);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==n){
						str[i] = ' ';
					}
				}
				printf("Chuoi con lai sau khi xoa la: ");
				printf("%s",str);
				break;
			case 6:
				exit(0);
			default:
				printf("Khong hop le");
		}
	} while(1==1);
}
