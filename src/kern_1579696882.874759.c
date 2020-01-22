#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "ones");
	float **B = create_two_dim_float(230, 800, "ones");

	for (int b = 5; b < 800; b++)
	  for (int a = 5; a < 159; a++)
	  {
	    
	     A[a]=A[a-5]*0.493;
	    
	     B[a][b]=B[a-3][b-5]-A[a];
	    
	     B[a][b]=B[a-2][b]/A[a];
	    
	     float var_a=A[a]+0.483;
	     float var_b=A[a+1]/0.451;
	  }

    return 0;
}