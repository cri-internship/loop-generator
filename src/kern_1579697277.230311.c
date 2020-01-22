#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(120, "random");

	for (int c = 5; c < 116; c++)
	  for (int b = 5; b < 116; b++)
	    for (int a = 5; a < 116; a++)
	    {
	      
	      A[a]=0.124;
	      A[a+4]=0.614;
	      
	      double var_a=A[a]+0.314;
	      double var_b=A[a-3]-0.855;
	      
	      double var_c=A[a]/0.134;
	      double var_d=A[a-5]/0.483;
	    }

    return 0;
}