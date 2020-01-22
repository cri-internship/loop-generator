#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(340, 730, "random");
	double *A = create_one_dim_double(860, "random");

	for (int c = 3; c < 730; c++)
	  for (int b = 5; b < 337; b++)
	    for (int a = 5; a < 337; a++)
	    {
	      
	      A[a]=A[a+3]/0.447;
	      
	      A[a]=0.834;
	      
	      A[a]=B[a][b]+A[a];
	      B[a][b]=B[a-3][b-3]/A[a];
	      
	      double var_a=B[a][b]/0.118;
	      double var_b=B[a+3][b]-0.907;
	    }

    return 0;
}