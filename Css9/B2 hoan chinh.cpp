#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,sum;
	printf("Nhap so hang va so cot: ");
	scanf("%d %d",&n,&m);
	int num[n][m],multiNum;
	int avg,min,max,count;
	int maxRow,sumRow,indexmaxRow;
	do{
		printf("***********************MENU***********************\n");
		printf("1. Nhap cac gia tri phan tu cua mang\n");
		printf("2. In gia tri phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu le va tinh tong\n");
		printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu va tinh tong\n");
		printf("6. In ra gia tri lon nhat va nho nhat cua mang\n");
		printf("7. Tinh gia tri trung binh cua phan tu mang\n");
		printf("8. In ra dong co tong gia tri la lon nhat\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban");
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
				sum=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(num[i][j]%2!=0){
							printf("%d\t",num[i][j]);
							sum+=num[i][j];
						}
					}
				}
				printf("Tong cac so le trong mnag la: %d\n",sum);
				break;
			case 4:
				multiNum=1;
				printf("Cac phan tu nam tren duong bien: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0||i==n-1||j==0||j==m-1){
							printf("%d\t",num[i][j]);
							multiNum*=num[i][j];
						}
					}
				}
				printf("Tich cac phan tu tren bien la: %d\n",multiNum);
				break;
			case 5:
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
					printf("Tong cac phan tu tren cheo phu la: %d",sum);
				} else{
					printf("Day khong phai ma tran vuong, ko co cheo chinh va phu:\n");
					
				}
				
				break;
			case 6:
				max=num[0][0];
				min=num[0][0];
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(min>num[i][j]){
							min=num[i][j];
						}
						if(max<num[i][j]){
							max=num[i][j];
						}
					}
				}
				printf("GTLN la: %d va GTNN la: %d\n",max,min);
				break;
			case 7:
				sum=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						sum+=num[i][j];
					}
				}
				avg=sum/(n*m);
				count=0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(avg==num[i][j]){
							count++;
						}
					}
				}
				printf("Co %d phan tu co gia tri = GTTB %d\n",count,avg);
				break;
			case 8:
				maxRow=0;
				for(int j=0;j<m;j++){
					maxRow+=num[0][j];
				}
				//So sanh maxRow voi cac dong khac
				for(int i=0;i<n;i++){
					sumRow=0;
					for(int j=0;j<m;j++){
						sumRow+=num[i][j];
					}
					if(maxRow<sumRow){
						maxRow=sumRow;
						indexmaxRow=i;
					}
				}
				printf("Dong %d co phan tu lon nhat la:\n",indexmaxRow);
				for(int j=0;j<m;j++){
					printf("%d\t",num[indexmaxRow][j]);
				}
				printf("\n");
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1 den 9: ");
		}
	} while(1==1);
}
