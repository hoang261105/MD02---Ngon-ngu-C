#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	//1. Khai bao mang so nguyen gom 100 phan tu
	int num[100],findNumber;
	int currentIndex=0;
	int size,sumNumber;
	int sum,max,min,count;
	do{
		printf("*******************MENU**********************\n");
		printf("1. Nhap so phan tu can nhap va cac gia tri phan tu\n");
		printf("2. In ra cac phan tu dang quan ly\n");
		printf("3. In ra gia tri phan tu chan va tinh tong\n");
		printf("4. In ra GTLN va GTNN trong mang\n");
		printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7. Them mot phan tu vao vi tri chi dinh\n");
		printf("8. In ra day so tang dan trong mang\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao so phan tu cua mang: ");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("num[%d]= ",currentIndex);
					scanf("%d",&num[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu dang quan ly:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",num[i]);
				}
				printf("\n");
				break; 
			case 3:
				sum=0;
				printf("Cac phan tu co gia tri chan trong mang la: %d\n");
				for(int i=0;i<currentIndex;i++){
					if(num[i]%2==0){
						printf("%d\t",num[i]);
					    sum+=num[i];
					}
				}
				printf("Tong cac so chan trong mang la: %d",sum);
				break;
			case 4:
				max=num[0];
				min=num[0];
				for(int i=0;i<currentIndex;i++){
					if(min>num[i]){
						min = num[i];
					}
					if(max<num[i]){
						max = num[i];
					}
				}
				printf("GTLN la: %d va GTNN la: %d",max,min);
				break;
			case 5:
				sumNumber = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime=0;
				    if(num[i]>=2){
				    	for(int j=2;j<=sqrt(num[i]);j++){
				    	    if(num[i]%j==0){
				    	    	isPrime=1;
				    	    	break;
				            } 
					    }
					}else{
				        isPrime=1;
				    }
				    if(isPrime==0){
				    	printf("%d\t",num[i]);
				    	sumNumber+=num[i];
				    }
				}
				printf("Tong cac so nguyen to trong mang la: %d",sum);
				break;\
			case 6:
				count=0;
				printf("Nhap vao 1 so thong ke trong bang: ");
				scanf("%d",&findNumber);
				for(int i=0;i<currentIndex;i++){
					if(num[i]==findNumber){
						count++;
					}
				}
				printf("So phan tu co gia tri %d trong mang la: %d\n",findNumber,count);
				break;
			case 7:
				int addValue,addIndex;
				printf("Nhap vao gia tri them trong mang: ");
				scanf("%d",&addValue);
				printf("Nhap chi so can chen vao mang: ");
				scanf("%d",&addIndex);
				if(addIndex<0||addIndex>=99){
					printf("Khong the chen phan tu vao chi so %d\n",addIndex);
				} else{
					if(addIndex==currentIndex){
						num[currentIndex] = addValue;
						currentIndex++;
					} else if(addIndex>currentIndex){
						//Gan cac gia tri tu currentIndex --> addIndex=0
						for(int i=currentIndex;i<addIndex;i++){
							num[i]=0;
						}
						num[addIndex]=addValue;
						currentIndex = addIndex+1;
					} else{
						//1.  Day cac phan tu tu addIndex len 1 phan tu
						for(int i=currentIndex;i>=addIndex;i--){
							num[i]=num[i-1];
						}
						//2. Tang currentIndex
						currentIndex++;
						//3. Chen phan tu
						num[addIndex]=addValue;
					}
				}
			case 8:
				for (int i=0;i<currentIndex-1;i++){
                    for(int j=i+1;j<currentIndex;j++){
                        if (num[i]>num[j]){
                        int temp = num[i]; 
                        num[i] = num[j]; 
                        num[j] = temp;
                    }
                }
            }
                //3. In mang sau khi da sap xep
                printf("Mang sau khi da sap xep tang dan:\n"); 
                for (int i=0;i<currentIndex;i++) {
                printf("%d\t",num[i]);
                }
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1 den 8: ");
		}
    } while(1==1);
}
