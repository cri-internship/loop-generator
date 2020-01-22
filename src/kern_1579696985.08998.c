#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(650, "zeros");

	for (int b = 4; b < 650; b++)
	  for (int a = 4; a < 650; a++)
	  {
	    
	     double var_a=A[a]/0.36;
	     double var_b=A[a-4]*0.316;
	    
	     double var_c=A[a]-0.66;
	  }

    return 0;
}