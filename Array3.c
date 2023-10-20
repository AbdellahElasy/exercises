/*
 * Write a C program to input elements in an array from user,
 * find maximum and minimum element in array.
 * C program to find biggest and smallest elements in an array.
 *  Logic to find maximum and minimum element in array in C programming.
 *  author : Abdellah Elasry
 */
#include<stdio.h>
#define SIZE 5
int main(){
int array[SIZE];
int x = 0 , max , min  ;
printf("enter %d element : " , SIZE);
for(x = 0 ; x < SIZE ; x++){
scanf("%d" , &array[x]);
}
max = array[0];
min = array[0];
for(x =1 ; x < SIZE ; x++){
   if(array[x]>max){
	   max = array[x];
   }
   if(array[x]<min){
	   min = array[x];
   }

   }
printf("Maximan element = %d\n" , max);
printf("Minimum element = %d\n" , min);





	
return 0;


}
