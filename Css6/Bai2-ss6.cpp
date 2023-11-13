#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,ucln,bcnn;
	int a=num1, b=num2;
	printf("Nhap 2 so: ");
	scanf("%d %d",&num1,&num2);
	do{
		printf("*******************CALCULATOR********************\n");
		printf("1. Tong hai so\n");
		printf("2. Hieu hai so\n");
		printf("3. Tich hai so\n");
		printf("4. Thuong hai so\n");
		printf("5. So du trong phep chia hai so\n");
		printf("6. UCLN\n");
		printf("7. BCNN\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Ban da chon 1 vui long cho trong giay lat\n");
				printf("Tong cua 2 so la: %d\n",num1+num2);
				break;
			case 2:
				printf("Ban da chon 2 vui long cho trong giay lat\n");
				printf("Hieu cua hai so la: %d\n",num1-num2);
				break;
			case 3:
				printf("Ban da chon 3 vui long cho trong giay lat\n");
				printf("Tich cua hai so la: %d\n",num1*num2);
				break;
			case 4:
				printf("Ban da chon 4 vui long cho trong giay lat\n");
				printf("Thuong cua hai so la: %d\n",num1/num2);
				break;
			case 5:
				printf("Ban da chon 5 vui long cho trong giay lat\n");
				printf("So du trong phep chia cua hai so la: %d\n",num1%num2);
				break;
			case 6:
				printf("Ban da chon 6 vui long cho trong giay lat\n");
				while(num1!=num2){
					if(num1=num2){
						ucln=num2;
						printf("UCLN cua hai so la: %d\n",ucln);
					} if(num1>num2){
						num1 = num1 - num2;
					} else{
						num2 = num2 - num1;
					} 
					return num1;
					break;
			case 7:
				printf("Ban da chon 7 vui long cho trong giay lat\n");
				while(num1!=num2){
					if(num1=num2){
						ucln=num1;
					    printf("BCNN cua hai so la: %d\n",a*b/ucln);
					    break;
					if(num1>num2){
						num1 = num1 - num2;
					} else{
						num2 = num2 - num1;
					}
				}
				return num1;
				} 
			case 8:
				exit(choice);
			default:
				printf("Vui long chon tu 1 den 8: \n");
			} 
		}
    } while("Vui long chon tu 1 den 8: \n");
}
