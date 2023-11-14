#include <stdio.h>
int main(){
		//nhap so phan cua mang va khai bao mang 1 chieu so nguyen  phan tu
    int n; 
	printf("nhap so vao so phan tu mang");
    scanf("%d", &n);
	int integer[n];
	//nhap gia tri cac phan tu cua mang
	for(int i=0; i<n; i++){
		printf("integer[%d]=",i);
		scanf("%d", &integer[i]); 
	} 
	printf("gia tri cac phan tu trong mang la:\n");
	for(int i=0; i<n; i++){
		printf("%d\t", integer[i]); 
	} 
	printf("\n"); 
	int max = integer[0];
	int min = integer[0];
	for(int i=1; i<n; i++){
		if(max<integer[i]){
			max=integer[i];
		}
		if(min>integer[i]){
			min=integer[i];
		}
	}
	printf("max=%d, min=%d", max, min);
}




