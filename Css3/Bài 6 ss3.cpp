#include<stdio.h>
int main(){
	int namsinh;
	printf("Nhap nam: ");
	scanf("%d",&namsinh);
	int tuoi = 2023 - namsinh;
	printf("Tuoi cua ban: %d\n",tuoi);
  if (tuoi%2)
  	printf("Tuoi vua nhap la so le");
  else
    printf("Tuoi vua nhap la so chan");
}
