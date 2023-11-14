#include<stdio.h>
int main(){
	int n;
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
	int updateValue,updateIndex;
	printf("Nhap gia tri can sua va vi tri muon sua: ");
	scanf("%d %d",&updateValue,&updateIndex);
	if(updateIndex>0 && updateIndex<n){
		integer[updateIndex]=updateValue;
		for(int i=0; i<n; i++){
			printf("integer[%d]= %d\n",i,integer[i]);
	    }
	} else{
		printf("Khong hop le");
	}
}
