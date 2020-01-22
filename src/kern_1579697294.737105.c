#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(990, 360, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int b = 0; b < 360; b++)
	  for (int a = 5; a < 177; a++)
	  {
	    
	     A[a][b]=A[a-5][b]+0.919;
	    
	     A[a][b]=A[a+5][b]+0.242;
	    
	     float var_a=B[a]/0.105;
	     B[a]=0.48;
	    
	     B[a]=A[a][b];
	  }

    return 0;
}