#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(890, "random");
	int ***D = create_three_dim_int(290, 200, 130, "random");
	int **C = create_two_dim_int(800, 470, "random");
	int **A = create_two_dim_int(600, 810, "random");

	for (int d = 3; d < 130; d++)
	  for (int c = 0; c < 200; c++)
	    for (int b = 3; b < 290; b++)
	      for (int a = 3; a < 290; a++)
	      {
	        
	       A[a][b]=A[a-1][b]/D[a][b][c];
	        
	       B[a]=B[a]*C[a][b]/A[a][b];
	       B[a]=C[a][b]+D[a][b][c]*A[a][b];
	        
	       C[a][b]=D[a][b][c]+B[a]-A[a][b]*B[a];
	       D[a][b][c]=D[a-3][b][c-3]*C[a][b]+A[a][b]/15;
	        
	       A[a][b]=C[a][b]*D[a][b][c]/B[a]+A[a][b];
	       C[a][b]=C[a+5][b+1]-A[a][b]+D[a][b][c]*B[a];
	      }

    return 0;
}