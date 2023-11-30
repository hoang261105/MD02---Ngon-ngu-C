#include<stdio.h>
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a,b;
	printf("Nhap 2 so a va b: ");
	scanf("%d %d",&a,&b);
    printf("2 so ban dau lan luot la: %d %d\n",a,b);
	swap(&a,&b);
	printf("2 so sau khi doi cho la: %d %d\n",a,b);
	int diff = a-b;
	printf("Hieu 2 so sau khi doi cho la: %d",diff);
	return 0;
}
	
