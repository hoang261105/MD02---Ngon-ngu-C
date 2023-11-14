#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
	int i,n,count=0,in=0,sum,sqrt,factorial,check=1;
	printf("Nhap vao so n ");
	scanf("%d",&n);
	do{
		printf("*******************INTEGER NUMBER********************\n");
		printf("1. In ra day so co gia tri nho hon hoac bang n và tinh tong\n");
		printf("2. In ra và dem các so chia het cho 3 nho hon n\n");
		printf("3. Kiem tra so nguyen có phai so nguyen to khong\n");
		printf("4. Kiem tra so nguyen có phai so hoan hao khong\n ");
		printf("5. Tinh tong cac uoc so cua n\n");
		printf("6. Tinh giai thua n\n");
		printf("7. In ra so dao nguoc cua n\n");
		printf("8. In ra cac so nguyên to tu 1-n\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=0;i<=n;i++){
					sum+=i;
					printf("%d\t",sum);
				}
				printf("Tong cac so do la: %d",sum);
				break;
			case 2:
				for(i=((int)(n/3))*3;i>=3;i++){
					printf("%d\t",i);
					break;
				}
				for(i=1;i<=n;i++){
					if(i%3==0){
						count+=1;
						printf("%d\t",i);
					}
				}
				printf("\n So luong cac so chia het cho 3 nho hon %d la: %d\n",n,count);
				break;
			case 3:
				if(i<2){
					printf("%d khong la so nguyen to \n",n);
				} else{
					int mark=1;
					for(i=2;i<=n;i++){
						if(n%i==0){
							mark=0;
							break;
						}
				    }
				if(mark==1){
				    printf("%d la so nguyen to \n",n);
				} else{
				   	printf("%d khong la so nguyen to \n",n);
					}
				}
				break;
			case 4:
				for(i=1;i<n;i++){
					if(n%i==0){
						sum+=i;
					}
				}
				if(sum==n){
					printf("%d la so hoan hao\n",n);
				} else{
					printf("%d khong la so hoan hao",n);
					break;
				}
			case 5:
				sum=0;
				for(i=1;i<=n;i++){
					if(n%i==0){
						printf("\n%d",i);
						sum+=i;
					}
				}
				printf("\n Tong cac uoc so cua %d la: %d",n,sum);
			    getch();
				break;
			case 6:
				while(n<0);
			    factorial=1;
				for(i=1;i<=n;i++){
					factorial*=i;
				}
				printf("Giai thua = %d",factorial);
				break;
			case 7:
				//in: invest number: So nghich dao
				do{
					in=in*10+n%10;
				}while(n/=10);
				getch();
				printf("Day so dao nguoc la: %d\n",in);
				break;
			case 8:
				for(i=1;i<=n;i++){
					for(int j=2;j<=i-1;j++){
						if(i%j==0){
							check=0;
						}
					}
					if(check==1){
						printf("%d\t",i);
					}
					check=1;
				}
				return 0;
				break;
			case 9:
				exit(choice);
			default:
				printf("Vui long nhap 1 den 9: ");
		}
	} while("Vui long nhap tu 1 den 9: ");
}
						
				
					
			     
			
						
				
	

