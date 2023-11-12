#include<stdio.h>
int main(){
	int day,month;
	printf("Nhap vao ngay, thang: ");
	scanf("%d %d",&day,&month);
	if(month==3){
		if(day>=21){
			printf("Cung hoang dao la: Bach Duong");
		} else{
			printf("Cung hoang dao là: Song Ngu");
		}
	}
	if(month==4){
		if(day>=21){
			printf("Cung hoang dao la: Kim Nguu");
		} else{
			printf("Cung hoang dao la: Bach Duong");
		}
	}
	if(month==5){
		if(day>=21){
			printf("Cung hoang dao la: Song Tu");
		} else{
			printf("Cung hoang dao la: Kim Nguu");
		}
	}
	if(month==6){
		if(day>=22){
			printf("Cung hoang dao la: Cu Giai");
		} else{
			printf("Cung hoang dao la: Song Tu");
		}
	}
	if(month==7){
		if(day>=23){
			printf("Cung hoang dao la: Su Tu");
		} else{
			printf("Cung hoang dao la: Cu Giai");
		}
	}
    if(month==8){
    	if(day>=23){
    		printf("Cung hoang dao la: Xu Nu");
    	} else{
    		printf("Cung hoang dao la: Su Tu");
    	}
    }
    if(month==9){
    	if(day>=23){
    		printf("Cung hoang dao la: Thien Binh");
		} else{
			printf("Cung hoang dao la: Xu Nu");
		}
	}
	if(month==10){
		if(day>=24){
			printf("Cung hoang dao la: Bo Cap");
		} else{
			printf("Cung hoang dao la: Thien Binh");
		}
	}
	if(month==11){
		if(day>=23){
			printf("Cung hoang dao la: Nhan Ma");
		} else{
			printf("Cung hoang dao la: Bo Cap");
		}
	}
	if(month==12){
		if(day>=22){
			printf("Cung hoang dao la: Ma Ket");
		} else{
			printf("Cung hoang dao la: Nhan Ma");
		}
	}
	if(month==1){
        if(day>=20){
		    printf("Cung hoang dao la: Bao Binh");
		} else{
			printf("Cung hoang dao la: Ma Ket");
		}
	} 		
	if(month==2){
		if(day>=19){
			printf("Cung hoang dao la: Song Ngu");
		} else{
			printf("Cung hoang dao la: Bao Binh");
		}
    }
}	
