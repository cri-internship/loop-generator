#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "ones");

	for (int c = 2; c < 937; c++)
	  for (int b = 2; b < 937; b++)
	    for (int a = 2; a < 937; a++)
	    {
	      
	      A[a]=0.162;
	      A[a+1]=0.876;
	      
	      double var_a=A[a]*0.28;
	      double var_b=A[a+3]/0.256;
	      
	      double var_c=A[a]+0.134;
	      double var_d=A[a-2]-0.625;
	    }

    return 0;
}