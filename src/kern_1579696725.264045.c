#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(870, "zeros");
	float **B = create_two_dim_float(20, 420, "zeros");

	for (int b = 2; b < 415; b++)
	  for (int a = 3; a < 19; a++)
	  {
	    
	     B[a][b]=B[a-3][b-1]-0.043;
	    
	     B[a][b]=B[a][b-2]/0.125;
	    
	     A[a]=A[a+1]-0.229;
	    
	     A[a]=0.004;
	    
	     float var_a=B[a][b]/0.383;
	     float var_b=B[a+1][b+5]-0.86;
	  }

    return 0;
}