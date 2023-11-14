#include<stdio.h>
int main(){
	int i,fizz,buzz,fizzbuzz;
	printf("Cac so trong khoang tu 1 den 100: ");
	for(i=1;i<=100;i++){
		printf("%d\t",i);
	}
	for(i=1;i<=100;i++){
     	if(i%3==0 && i%5==0){
		     	printf("Fizzbuzz: %d\n",i);
		   } else if(i%5==0){
			    printf("Buzz: %d\n",i);
		   } else if(i%3==0){
		     	printf("Fizz: %d\n",i);
		   } else{
		   	    printf("%d\n ",i);
		   }
	   }
   }
