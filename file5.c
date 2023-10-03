#include <stdio.h>
#include <string.h>

int main(){
	char s1[1000], s2[1000];
	printf("enter the first string : \n");
	scanf(" %s ", s1);
	printf("enter the secend string : \n");
	scanf(" %s " , s2);

	strcat(s1,s2);

	printf(" %s\n" ,s1);
	return 0;

}
