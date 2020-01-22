#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(950, 30, "ones");
	float *B = create_one_dim_float(630, "ones");

	for (int b = 4; b < 30; b++)
	  for (int a = 3; a < 629; a++)
	  {
	    
	     B[a]=B[a-1]/0.106;
	    
	     A[a][b]=A[a-2][b-4]-0.423;
	    
	     B[a]=0.842;
	    
	     float var_a=B[a]+0.512;
	     float var_b=B[a+1]+0.96;
	    
	     float var_c=B[a]-0.546;
	  }

    return 0;
}