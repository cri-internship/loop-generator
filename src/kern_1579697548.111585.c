#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(280, 80, "random");
	float ***D = create_three_dim_float(220, 590, 990, "random");
	float **B = create_two_dim_float(140, 470, "random");
	float **C = create_two_dim_float(510, 600, "random");
	float *A = create_one_dim_float(810, "random");

	for (int c = 2; c < 76; c++)
	  for (int b = 1; b < 275; b++)
	    for (int a = 1; a < 275; a++)
	    {
	      
	      C[a][b]=C[a-1][b-2]+0.79;
	      
	      A[a]=A[a-1]-B[a][b]+C[a][b]*E[a][b]/D[a][b][c];
	      
	      D[a][b][c]=E[a][b]/A[a]*A[a];
	      E[a][b]=E[a+5][b+4]-B[a][b]/A[a];
	    }

    return 0;
}