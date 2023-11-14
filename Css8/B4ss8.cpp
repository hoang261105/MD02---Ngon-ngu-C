#include <stdio.h>

int main(){
	int n,addValue,addIndex;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int integer[n];
	for(int i = 0 ; i < n ; i++){
		printf("integer[%d] = ",i);
		scanf("%d",&integer[i]);
	}
	printf("nhap vao gia tri can them : ");
	scanf("%d",&addValue);
	printf("nhap vao vi tri can them : ");
	scanf("%d",&addIndex);
	int newInteger[n+1];
	for(int i=0;i<addIndex;i++){
		newInteger[i]=integer[i];
	}
	newInteger[addIndex]=addValue;
	for(int i=addIndex+1;i<n+1;i++){
		newInteger[i]=integer[i-1];
	}
	for(int i=0;i<n ;i++){
		printf("%d\t", integer[i]);
	}
	printf("\n");
	for(int i=0;i<n+1;i++){
		printf("%d \t",newInteger[i]);
	}
}
