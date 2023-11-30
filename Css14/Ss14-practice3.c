#include<stdio.h>
int cout(char *arr){
	int count = 0,length=0;
	char ptr = *arr;
	for(int i=1;i<=length[arr];i++){
		count++;
		ptr++;
	}
	return count;
}
int main(){
	char arr[100];
	printf("Nhap chuoi ky tu: ");
	scanf("%s",arr);
	int strNum = cout(arr);
	printf("So ky tu co trong chuoi la: %d\n",strNum);
	return 0;
}
