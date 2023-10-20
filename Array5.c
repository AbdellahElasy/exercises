 /*
 * C program to add two matrices.
 * Write a C program to read elements in two matrices and add elements of both matrices
 * C program for addition of two matrix. Matrix addition program in C.
 *  Logic to add two matrix in C programming.
 *  author: Abdellah Elasry .
 */
#include <stdio.h>
#define SIZE 3
int main(){
	int A[SIZE][SIZE];   // matrix n1
	int B[SIZE][SIZE];  // matrix n2	
	int AB[SIZE][SIZE]; // result matrix n1 + matrix n2
	int row , col;

	printf("Enter %d  elements of matrix n1 size 3x3  :" , SIZE);
	for(row = 0; row <SIZE ; row++){
		for(col = 0 ; col<SIZE ; col++){
			scanf("%d" ,&A[row][col]);
		}
	}
	printf("Enter %d elements of matrix n2 size 3x3 : " ,SIZE);
	for(row = 0 ;row < SIZE ; row++){
		for(col = 0 ; col < SIZE ;col++){
			scanf("%d"  , &B[row][col]);

		}
	}

	/*
	 *  Add both matrices A and B entry wise or element wise
	 *  and stores result in matrix AB
	 */


	for(row = 0 ; row <SIZE ; row++){
		for(col = 0; col < SIZE ; col++){
			AB[row][col] = A[row][col] + B[row][col];

		}
	}
	printf(" sum of matrix n1 and matrix n2 = ");
	for(row = 0 ; row < SIZE ; row++){
		for(col = 0 ; col < SIZE ; col++){

			printf("%d" , AB[row][col]);

		}

	}

	return 0;
}




