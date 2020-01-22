#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(730, "zeros");
	double **A = create_two_dim_double(100, 710, "zeros");
	double *B = create_one_dim_double(370, "zeros");

	for (int c = 1; c < 710; c++)
	  for (int b = 3; b < 99; b++)
	    for (int a = 3; a < 99; a++)
	    {
	      
	      A[a][b]=A[a-2][b]+0.116/C[a];
	      
	      B[a]=B[a+2]+0.011;
	      
	      C[a]=C[a+4]+0.758;
	      
	      A[a][b]=A[a+1][b]/0.352;
	      
	      C[a]=B[a]/A[a][b]-C[a];
	      A[a][b]=B[a+1]+A[a][b];
	      
	      double var_a=C[a]+0.826;
	      double var_b=C[a-1]*0.403;
	    }

    return 0;
}