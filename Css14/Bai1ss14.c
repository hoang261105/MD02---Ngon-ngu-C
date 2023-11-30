#include<stdio.h>
#include<string.h>
int main(){
	int n = 12;
	int *ptr1 = &n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("%d",n);
	printf("\n");
	printf("%d",*ptr1);
	return 0;
}
