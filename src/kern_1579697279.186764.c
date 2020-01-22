#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(120, 810, "ones");
	double *B = create_one_dim_double(260, "ones");

	for (int b = 4; b < 810; b++)
	  for (int a = 4; a < 120; a++)
	  {
	    
	     B[a]=0.681;
	     B[a+1]=0.912;
	    
	     A[a][b]=0.723;
	     A[a-4][b-4]=0.935;
	    
	     double var_a=B[a]*0.199;
	     double var_b=B[a-1]+0.337;
	  }

    return 0;
}