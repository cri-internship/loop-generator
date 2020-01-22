#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(60, "zeros");
	float **A = create_two_dim_float(840, 370, "zeros");
	float *B = create_one_dim_float(670, "zeros");

	for (int c = 0; c < 367; c++)
	  for (int b = 1; b < 670; b++)
	    for (int a = 1; a < 670; a++)
	    {
	      
	      A[a][b]=A[a][b+3]/0.724-B[a];
	      
	      B[a]=B[a]-A[a][b]*C[a];
	      C[a]=B[a-1]*C[a]+A[a][b];
	    }

    return 0;
}