// c program to find average of marks using array
#include <stdio.h>
#define SIZE 6 //size of array

int main(){
int marks[SIZE]={0};
int counter = 0 , sum = 0 ;
float avg = 0;
printf("enter marks of %d students :",SIZE);
//input marks of all students in marks arry
for(counter = 0 ; counter < SIZE ; counter++){
    scanf("%d" , &marks[counter]);
}
//find sum of marks
for(counter = 0 ;counter < SIZE ; counter++){
sum += marks[counter];
}
//Calculate averge of marks
avg = (float) sum / SIZE ;
// print the averge marks
printf("averge marks is : %g" , avg);
return 0 ;



}

