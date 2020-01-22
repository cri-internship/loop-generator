#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(770, "ones");
	double **B = create_two_dim_double(20, 500, "ones");

	for (int c = 5; c < 500; c++)
	  for (int b = 5; b < 19; b++)
	    for (int a = 5; a < 19; a++)
	    {
	      
	      A[a]=A[a-5]*0.636;
	      
	      B[a][b]=B[a+1][b]/0.935;
	      
	      A[a]=A[a+3]/0.283;
	      
	      double var_a=B[a][b]-0.035;
	      double var_b=B[a-3][b-1]+0.245;
	      
	      double var_c=B[a][b]*0.125;
	      double var_d=B[a-2][b-5]*0.415;
	    }

    return 0;
}