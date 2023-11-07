#include<stdio.h>
#include<math.h>
int main(){
	int num1 = 11;
	int num2 = 4;
	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	int divide = num1/num2;
	int divide_ceil = ceil((double)num1/(double)num2);
	int divide_floor = floor((double)num1/(double)num2);
	int surplus = num1 % num2;
	num1++;
	num2--;
	int result = pow(num1,num2);
}
