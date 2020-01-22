#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(50, "zeros");
	double ***D = create_three_dim_double(500, 740, 970, "zeros");
	double *C = create_one_dim_double(490, "zeros");
	double *A = create_one_dim_double(480, "zeros");

	for (int b = 0; b < 477; b++)
	  for (int a = 0; a < 477; a++)
	  {
	    
	     A[a]=A[a+3]/0.67;
	    
	     double var_a=C[a]/0.109;
	     C[a]=0.675;
	  }

    return 0;
}