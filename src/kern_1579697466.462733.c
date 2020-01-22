#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(360, "random");
	double *A = create_one_dim_double(180, "random");
	double *C = create_one_dim_double(270, "random");

	for (int d = 2; d < 177; d++)
	  for (int c = 2; c < 177; c++)
	    for (int b = 2; b < 177; b++)
	      for (int a = 2; a < 177; a++)
	      {
	        
	       C[a]=0.702;
	       C[a-2]=0.007;
	        
	       A[a]=0.319;
	       A[a+3]=0.848;
	        
	       double var_a=C[a]/0.759;
	       double var_b=C[a+1]-0.416;
	      }

    return 0;
}