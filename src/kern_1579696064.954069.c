#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(70, "ones");
	double **B = create_two_dim_double(990, 130, "ones");
	double **A = create_two_dim_double(850, 680, "ones");

	for (int b = 0; b < 127; b++)
	  for (int a = 0; a < 988; a++)
	  {
	    
	     double var_a=B[a][b]/0.609;
	     double var_b=B[a+2][b+3]-0.429;
	  }

    return 0;
}