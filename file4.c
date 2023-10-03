#include <stdio.h>
int main(){
	int num1 , num2;
	float  add , sub , mult , div ,modu ;
	printf("enter number 1 : \n");
	scanf("%d" , &num1);
	printf("enter number 2 : \n");
	scanf("%d" , &num2);
	add = num1 + num2;
	sub = num1 - num2 ;
	mult = num1 * num2 ;
	div =(float) num1 / num2;
	modu = num1 % num2;

	printf("Sum of num1 and num2 = %lf \n", add);
	printf("Difference of num1 and num2 = %lf \n", sub);
	printf("Product of num1 and num2 = %lf \n", mult);
	printf("Modulus of num1 and num2 = %lf \n", div);
	printf("Quotient of num1 and num2 = %lf ", modu);

	return 0;

}
