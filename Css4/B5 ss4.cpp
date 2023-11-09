#include<stdio.h>
int main(){
	int day,month,year;
	printf("Nhap ngay, thang, nam: ");
	scanf("%d %d %d",&day,&month,&year);
	if(month>0 && month<12 || year>0 ){
		printf("Ngay thang nam hop le");
		return 0;
	}
	//Dat them bien de ti kiem tra ngay minh nhap voi songay he thong
	int songay;
	switch (month){
		//Nhung thang cung 31 ngay de vao 1 hang
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			songay = 31;
			break;
		//Nhung thang cung 30 ngay de vao 1 hàng nua
		case 4: case 6: case 9: case 11:
			songay = 30;
			break;
		//Thang 2 de rieng
		case 2:
			if(year%4==0) {
			 songay = 29;
		   }else{          
		    songay = 28;
		  }
	}
	//Kiem tra dieu kien cua ngay minh nhap voi songay trong he thong
	if(day<songay && day>0){
		printf("\nNgay thang nam hop le");
	} else{
		printf("\nNgay thang nam khong hop le");
	}
}

