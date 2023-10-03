#include <stdio.h>

int main(){
	int v1 , v2 , cup;
	printf("enter number1 (v1)  : \n");
	scanf("%d" , &v1);
	printf("enter number2 (v2)  : \n");
	scanf("%d" , &v2);

	cup = v1 ;
	v1 = v2 ;
	v2 = cup ;

	printf("v1 : %d \t v2 : %d \n" , v1 , v2);
	return 0 ;




}
