#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(30, 100, "zeros");
	float *A = create_one_dim_float(140, "zeros");

	for (int b = 4; b < 100; b++)
	  for (int a = 4; a < 27; a++)
	  {
	    
	     B[a][b]=0.468;
	     B[a-4][b]=0.804;
	    
	     B[a][b]=0.628;
	    
	     A[a]=A[a]+B[a][b];
	     B[a][b]=A[a-2]+B[a][b];
	    
	     float var_a=B[a][b]/0.444;
	     float var_b=B[a-2][b-4]*0.501;
	  }

    return 0;
}