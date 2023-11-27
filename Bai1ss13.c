#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[100];
	int length=0,letNum,letNum1,letNum2;
	do{
		printf("**************************MENU***************************\n");
		printf("1. Nhap vao chuoi ki tu\n");
		printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ki tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				str[100];
				printf("Nhap vao chuoi ki tu: ");
				scanf("%s", &str);
				break;
			case 2:
				printf("Do dai cua chuoi la: %d\n",strlen(str));
				printf("Chuoi vua nhap la: ");
				printf("%s",str);
				break;
			case 3:
				
				printf("\nChuoi dao nguoc la: ");
				for(int i=length;i>=0;i--){
					printf("%c",str[i]);
				}
				break;
			case 4:
				letNum=0;
			    for(int i=0;i<str[length];i++){
			    	if(str[i]>= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			    		letNum++;
			    	}
			    }
			    printf("So luong ki tu chu cai trong chuoi la: %d\n",letNum);
				break;
			case 5:
				letNum1=0;
				for(int i=0;i<str[length];i++){
			    	if(str[i]>= '0' && str[i] <= '9'){
			    		letNum1++;
			    	}
			    }
			    printf("So luong ki tu chu so trong chuoi la: %d\n",letNum1);
				break;
			case 6:
				printf("So luong ki tu dac biet trong chuoi la: %d\n",strlen(str)-letNum-letNum1);
				break;
			case 7:
				exit(0);
			default:
				printf("Khong hop le");
		}
	} while(1==1);
}
