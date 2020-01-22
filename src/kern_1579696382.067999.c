#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(710, 770, "ones");
	double *A = create_one_dim_double(430, "ones");

	for (int b = 0; b < 767; b++)
	  for (int a = 2; a < 430; a++)
	  {
	    
	     B[a][b]=B[a+3][b+3]*A[a];
	    
	     B[a][b]=B[a+4][b+2]+A[a];
	    
	     double var_a=A[a]+0.025;
	     double var_b=A[a-2]/0.731;
	  }

    return 0;
}