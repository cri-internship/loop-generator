#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(880, 810, "zeros");
	float **A = create_two_dim_float(90, 190, "zeros");
	float ***E = create_three_dim_float(290, 590, 520, "zeros");
	float *C = create_one_dim_float(140, "zeros");
	float ***D = create_three_dim_float(710, 670, 720, "zeros");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 666; b++)
	    for (int a = 0; a < 138; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+4][c]*0.146;
	      
	      B[a][b]=B[a+3][b+4]-A[a][b]+0.43;
	      
	      C[a]=C[a+2]-0.811;
	    }

    return 0;
}