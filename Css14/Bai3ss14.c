#include<stdio.h>
int strLen(char *str){
	const char *ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - str;
}
int main(){
	char str1[100];
	char str2[100];
	printf("Nhap vao mang 1: ");
	scanf("%s",str1);
	printf("Nhap vao mang 2: ");
	scanf("%s",str2);
	int strLen1 = strLen(str1);
	printf("Do dai cua chuoi 1 la: %d\n",strLen1);
	int strLen2 = strLen(str2);
	printf("Do dai cua chuoi 2 la: %d\n",strLen2);
	if(strLen1==strLen2){
		printf("Hai chuoi bang nhau\n");
	} else if(strLen1>strLen2){
		printf("Chuoi 1 dai hon chuoi 2\n");
	} else{
		printf("Chuoi 2 dai hon chuoi 1");
	}
	return 0;
}
	
	
