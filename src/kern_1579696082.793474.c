#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(360, "ones");
	float **B = create_two_dim_float(890, 510, "ones");

	for (int b = 0; b < 506; b++)
	  for (int a = 2; a < 360; a++)
	  {
	    
	     B[a][b]=B[a+1][b+4]/A[a];
	    
	     float var_a=A[a]/0.109;
	     float var_b=A[a-2]-0.732;
	  }

    return 0;
}