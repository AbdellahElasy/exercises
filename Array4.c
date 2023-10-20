/*
 *Write a C program to declare a two-dimensional array of size 4×3.
 * Read values in each element of array from user and display values of all elements.
 * author : Abdellah Elasry:
 */
#include <stdio.h>
#define ROW 4
#define COL 3
int main(){
	int matrix[ROW][COL];// declare tow-dimensionl array
	int row , col ;
	// input elements in matrix
	printf("enter elements in matrix of size %d%d \n" , ROW , COL);

	for(row = 0 ; row < ROW ; row++){
		for(col = 0 ; col < COL ; col++){
			scanf("%d" ,&matrix[row][col]);

		}
	}
	printf("\nElements in matrix are: \n");
	for(row=0; row<ROW; row++)
	{
		for(col=0; col<COL; col++)
		{
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}

	return 0;








}
