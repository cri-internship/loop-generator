#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(660, "random");

	for (int b = 4; b < 660; b++)
	  for (int a = 4; a < 660; a++)
	  {
	    
	     double var_a=A[a]/0.412;
	     A[a]=0.136;
	    
	     double var_b=A[a]/0.809;
	     double var_c=A[a-3]*0.637;
	    
	     double var_d=A[a]+0.482;
	     double var_e=A[a-4]*0.832;
	  }

    return 0;
}