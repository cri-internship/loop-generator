#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(460, "zeros");
	float *B = create_one_dim_float(280, "zeros");
	float **C = create_two_dim_float(180, 270, "zeros");

	for (int c = 0; c < 267; c++)
	  for (int b = 4; b < 177; b++)
	    for (int a = 4; a < 177; a++)
	    {
	      
	      A[a]=A[a-3]+0.621;
	      
	      C[a][b]=C[a+3][b+3]*B[a]-0.788;
	      
	      B[a]=B[a+5]-0.149;
	      
	      A[a]=A[a+2]/0.956;
	      
	      B[a]=B[a+2]-A[a];
	    }

    return 0;
}