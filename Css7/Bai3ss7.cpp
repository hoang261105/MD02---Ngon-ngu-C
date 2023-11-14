//dep: deposit: so tien gui
//air: annual interest rate: lai suat nam
//mir: month interest rate: lai suat thang
//nms: Numbers of month sent: so thang gui
//mr: money recieved: tien nhan duoc
#include<stdio.h>
int main(){
	int dep,nms;
	float mir,air,interest;
	float mr;
	printf("Nhap so tien gui, lai suat nam, so thang gui: ");
	scanf("%d%f%d", &dep, &air, &nms);
	mir = air/12;
	mr = dep;
	for(int i=1;i<=nms;i++){
		printf("%d\t",i);
	    interest = mir*mr;
	    mr += interest;
	    printf("Tien lai la: %.2f VND\n", interest);
	}
	printf("Tien nhan duoc la: %.2f VND\n", mr);
}
