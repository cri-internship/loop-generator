#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(370, "ones");
	double **D = create_two_dim_double(170, 670, "ones");
	double **A = create_two_dim_double(410, 590, "ones");
	double *C = create_one_dim_double(320, "ones");
	double **E = create_two_dim_double(530, 630, "ones");

	for (int b = 0; b < 666; b++)
	  for (int a = 4; a < 168; a++)
	  {
	    
	     B[a]=B[a-4]-0.123;
	    
	     D[a][b]=D[a+2][b+4]-0.097;
	    
	     double var_a=B[a]*0.422;
	     double var_b=B[a+2]-0.983;
	  }

    return 0;
}