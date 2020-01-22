#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(320, 590, 60, "ones");
	double *A = create_one_dim_double(270, "ones");

	for (int b = 4; b < 590; b++)
	  for (int a = 4; a < 269; a++)
	  {
	    
	     A[a]=A[a-4]-B[a][b][a];
	    
	     A[a]=A[a]-B[a][b][a];
	    
	     double var_a=A[a]/0.211;
	     A[a]=0.052;
	    
	     A[a]=A[a+1]*0.665;
	    
	     double var_b=B[a][b][a]/0.667;
	     double var_c=B[a-2][b-4][a]/0.332;
	  }

    return 0;
}