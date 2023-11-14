#include<stdio.h>
int main(){
	int n,sum;
	printf("Nhap so n: ");
	scanf("%d",&n);
	int integer[n];
	for(int i=0; i<n; i++){
		printf("integer[%d]=",i);
		scanf("%d", &integer[i]); 
	} 
	printf("gia tri cac phan tu trong mang la:\n");
	for(int i=0; i<n; i++){
		printf("%d\t",integer[i]);
	}
	printf("\n");
	int findNumber;
	printf("Nhap findNumber: ");
	scanf("%d",&findNumber);
	for(int i=0; i<n; i++){
		if(integer[i]==findNumber){
			sum+=integer[i];
			printf("integer[%d]= %d\n",i,findNumber);
		}
	}
	printf("Tong cac so do la: %d",sum);
}
	
