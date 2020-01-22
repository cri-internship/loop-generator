#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(310, "ones");
	double **D = create_two_dim_double(80, 920, "ones");
	double *A = create_one_dim_double(910, "ones");
	double *B = create_one_dim_double(150, "ones");

	for (int c = 5; c < 916; c++)
	  for (int b = 5; b < 79; b++)
	    for (int a = 5; a < 79; a++)
	    {
	      
	      D[a][b]=D[a-5][b-5]/0.711;
	      
	      B[a]=B[a+1]/A[a]-D[a][b];
	      
	      D[a][b]=D[a][b+1]/0.593;
	      
	      D[a][b]=D[a+1][b+4]+0.597;
	    }

    return 0;
}