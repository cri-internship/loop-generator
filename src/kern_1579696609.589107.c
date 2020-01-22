#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(550, "zeros");
	float *B = create_one_dim_float(310, "zeros");

	for (int b = 4; b < 310; b++)
	  for (int a = 4; a < 310; a++)
	  {
	    
	     A[a]=A[a-1]*0.492;
	    
	     B[a]=A[a];
	     B[a-3]=0.162;
	    
	     A[a]=0.645;
	    
	     float var_a=A[a]+0.495;
	     float var_b=A[a+5]+0.682;
	  }

    return 0;
}