#include<stdio.h>
int main(){
	int bs, aw, wd=26;
	printf("Nhap luong co ban va ngay cong thuc te: \n");
	scanf("%d %d",&bs, &aw);
	if(aw>wd){
		printf("Luong lam them la: %d VND",(bs+bs*150/100)*(aw-26));
	} else {
		printf("Luong goc la: %d VND",bs*(aw/wd));
		}
}
	
