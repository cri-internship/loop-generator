#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "random");
	double **A = create_two_dim_double(170, 910, "random");

	for (int b = 0; b < 910; b++)
	  for (int a = 2; a < 170; a++)
	  {
	    
	     B[a]=B[a-1]/0.795;
	    
	     B[a]=B[a-2]+0.894;
	    
	     double var_a=A[a][b]*0.386;
	     double var_b=A[a][b]/0.472;
	    
	     double var_c=B[a]+0.598;
	  }

    return 0;
}