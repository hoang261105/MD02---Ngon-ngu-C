#include<stdio.h>
int sum(int *start, int *end){
	int total=0;
	int ptr = *start;
	while(ptr<=*end){
		total+=ptr;
		ptr++;
	}
	return total;
}
int main(){
	int start,end;
	printf("Nhap so bat dau va ket thuc: ");
	scanf("%d %d",&start,&end);
	int total = sum(&start,&end);
	printf("In ra tong cac so nguyen tu %d den %d la: %d\n",start,end,total);
	return 0;
}
