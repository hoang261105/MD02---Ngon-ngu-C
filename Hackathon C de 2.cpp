#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m;
	printf("Nhap so hang va so cot: ");
	scanf("%d %d",&n,&m);
	int num[n][m],count;
	int sum;
	do{
		printf("*************************MENU*********************\n");
		printf("1. Nhap cac gia tri phan tu cua mang\n");
		printf("2. In ra cac gia tri phan tu trong mang\n");
		printf("3. Tinh so luong phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va cheo phu\n");
		printf("5. Su dung thuat toan lua chon sap xep cac phan tu tang dan theo cot\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang\n");
		printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, chen vao mang 2 chieu\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("number[%d][%d]= ",i,j);
						scanf("%d",&num[i][j]);
					}
				}
				break;
			case 2:
				printf("In gia tri cac phan tu trong mang: :\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				count=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(num[i][j]%2==0 && num[i][j]%3==0){
							count++;
						}
					}
				}
				printf("So phan tu chia het cho 2 va 3 trong mang la: %d\n",count);
				break;
			case 4:
				sum=0;
				printf("Cac phan tu nam tren duong bien: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0||i==n-1||j==0||j==m-1){
							printf("%d\t",num[i][j]);
							sum+=num[i][j];
						}
					}
				}
				printf("Tong cac phan tu tren bien la: %d\n",sum);
				if(n==m){
					sum=0;
				    printf("Cac phan tu nam tren duong cheo chinh:\n");
				    for(int i=0;i<n;i++){
					    for(int j=0;j<m;j++){
					    	if(i==j){
					    		printf("%d\t",num[i][j]);
					    		sum+=num[i][j];
					    	}
					    }
					}
					printf("Tong cac phan tu tren cheo chinh la: %d\n",sum);
					sum=0;
					printf("Cac phan tu nam tren duong cheo phu la:\n");
					 for(int i=0;i<n;i++){
					    for(int j=0;j<m;j++){
					    	if(i+j==n-1){
					    		printf("%d\t",num[i][j]);
					    		sum+=num[i][j];
					    	}
					    }
					}
					printf("Tong cac phan tu tren cheo phu la: %d\n",sum);
				} else{
					printf("Day khong phai ma tran vuong, ko co cheo chinh va phu:\n");
					
				}
				break;
			case 5:
				for(int i=1;i<n;i++){
		        	for(int j=0;j<m;j++){
		        		int key = num[i][j];
		        		int k=i-1;
		        		while(k>=0 && key<num[k][j]){
		        			num[k+1][j]=num[k][j];
		        			k-=1;
		        		}
		        		num[k+1][j]=key;
		        	}
			    }
			    printf("Gia tri cac phan tu theo cot tang dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 6:
				printf("Cac so nguyen to trong mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
					    int isPrime = 0;
					    if(num[i][j]>=2){
						    for(int k=2;k<=sqrt(num[i][j]);k++){
							    if(num[i][j]%k==0){
								    isPrime = 1;
								    break;
							    }
						    }
				    	}else{
						    isPrime=1;
					    }
					    if(isPrime==0){
						    printf("%d\t",num[i][j]);
				        }
				    }
				}
				break;
		}
	} while(1==1);
}
