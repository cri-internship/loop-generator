#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(560, "ones");
	float **B = create_two_dim_float(970, 800, "ones");

	for (int b = 5; b < 800; b++)
	  for (int a = 5; a < 560; a++)
	  {
	    
	     A[a]=B[a][b];
	     A[a]=A[a]+0.625;
	    
	     A[a]=A[a-1]/0.07;
	    
	     B[a][b]=B[a-5][b-4]-A[a];
	    
	     B[a][b]=B[a-4][b-5]-0.984;
	    
	     B[a][b]=B[a+1][b]-0.359;
	    
	     float var_a=B[a][b]+0.512;
	     float var_b=B[a+2][b]*0.208;
	    
	     B[a][b]=B[a][b]+0.804;
	     B[a][b]=B[a-3][b-2]-A[a];
	  }

    return 0;
}