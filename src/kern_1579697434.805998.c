#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(1000, "ones");
	float *D = create_one_dim_float(600, "ones");
	float **B = create_two_dim_float(980, 810, "ones");
	float *C = create_one_dim_float(980, "ones");

	for (int b = 0; b < 810; b++)
	  for (int a = 2; a < 979; a++)
	  {
	    
	     B[a][b]=B[a+1][b]/C[a];
	    
	     A[a]=0.885;
	     A[a-2]=0.497;
	    
	     C[a]=B[a][b]*A[a]-0.942;
	     C[a]=B[a][b]/0.757*D[a];
	  }

    return 0;
}