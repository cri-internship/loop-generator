#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(190, "ones");
	double *C = create_one_dim_double(790, "ones");
	double *A = create_one_dim_double(770, "ones");
	double *B = create_one_dim_double(400, "ones");

	for (int b = 4; b < 186; b++)
	  for (int a = 4; a < 186; a++)
	  {
	    
	     D[a]=D[a-4]*0.535+A[a];
	    
	     D[a]=D[a+4]/C[a]+B[a];
	  }

    return 0;
}