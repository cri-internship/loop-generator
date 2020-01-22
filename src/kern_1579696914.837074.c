#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(600, 640, "ones");
	double **A = create_two_dim_double(520, 860, "ones");

	for (int c = 5; c < 639; c++)
	  for (int b = 2; b < 520; b++)
	    for (int a = 2; a < 520; a++)
	    {
	      
	      A[a][b]=A[a-2][b-1]-0.968;
	      
	      A[a][b]=A[a-1][b-2]/0.988;
	      
	      A[a][b]=A[a-1][b-5]*0.68;
	      
	      B[a][b]=B[a+1][b]*0.702;
	      
	      double var_a=B[a][b]/0.007;
	      double var_b=B[a+2][b+1]+0.474;
	      
	      double var_c=B[a][b]*0.765;
	      double var_d=B[a][b-3]*0.023;
	    }

    return 0;
}