#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(770, 250, "ones");
	float **A = create_two_dim_float(740, 710, "ones");

	for (int b = 4; b < 248; b++)
	  for (int a = 4; a < 736; a++)
	  {
	    
	     A[a][b]=A[a-1][b-3]*0.431;
	    
	     A[a][b]=A[a-3][b-3]*B[a][b];
	    
	     B[a][b]=A[a][b];
	     B[a-1][b-4]=A[a][b];
	    
	     B[a][b]=0.281;
	    
	     float var_a=A[a][b]/0.739;
	     float var_b=A[a+4][b+4]/0.351;
	  }

    return 0;
}