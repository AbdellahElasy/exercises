/*
 * Let us write a C program to declare an array capable of storing 10 student marks.
 *  Input marks of all 10 students and find their averrge.
 */
#include<stdio.h>
#define SIZE 10 // size of array
int main(){
int marks[SIZE];
int index = 0 , sum = 0 ;
float averrge = 0;
printf("\n enter %d student marks : " , SIZE);
for(index = 0 ; index < SIZE ; index++){
scanf("%d" ,&marks[index]);
}
for(index = 0 ;index < SIZE ;index++){
sum += marks[index];
}
averrge = (float)sum / SIZE;
printf("sum is : %d \t averrge is : %f", sum , averrge);


return 0;
}
