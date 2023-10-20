/*
 * Write a C program to declare, initialize, input elements in array and print array.
 * How to input and display elements in an array using for loop in C programming.
 * C program to input and print array elements using loop.
 * Auther : Abdellah elasry.
 */

#include <stdio.h>
#define MAX_SIZE 123
int main(){
int xar[MAX_SIZE];
int x = 0 , n = 0 ;
// input array size :
printf("Enter size of array : ");
scanf("%d", &n);
// input elements in array :
printf("Enter %d  elements in the array :", n);
for(x = 0 ; x < n ;x++){
   scanf("%d" , &xar[x]);
}
// print all elements of array 
printf("\n Elements in array are : " );
for(x = 0 ; x <=n-1 ;x++){
printf("\n%d \n " , xar[x]);

}


return 0;



}
