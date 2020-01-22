#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(670, 210, "random");
	double *C = create_one_dim_double(990, "random");
	double *A = create_one_dim_double(270, "random");

	for (int c = 2; c < 205; c++)
	  for (int b = 4; b < 270; b++)
	    for (int a = 4; a < 270; a++)
	    {
	      
	      A[a]=A[a-3]/0.305;
	      
	      B[a][b]=B[a][b+1]*0.609+A[a];
	      
	      B[a][b]=B[a+3][b+5]*C[a];
	      
	      A[a]=0.077;
	      
	      A[a]=A[a]-B[a][b]+C[a];
	    }

    return 0;
}