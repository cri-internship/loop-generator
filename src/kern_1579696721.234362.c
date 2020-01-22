#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(40, "random");
	double **B = create_two_dim_double(730, 760, "random");
	double *D = create_one_dim_double(910, "random");
	double *A = create_one_dim_double(870, "random");

	for (int c = 2; c < 35; c++)
	  for (int b = 2; b < 35; b++)
	    for (int a = 2; a < 35; a++)
	    {
	      
	      D[a]=D[a-2]*0.301;
	      
	      C[a]=0.902;
	      C[a+5]=0.795;
	      
	      A[a]=D[a];
	      A[a+3]=0.787*C[a]-D[a];
	      
	      C[a]=D[a]*0.517/C[a]-B[a][b];
	    }

    return 0;
}