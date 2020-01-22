#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(220, 780, 370, "zeros");
	float *A = create_one_dim_float(880, "zeros");

	for (int b = 1; b < 780; b++)
	  for (int a = 4; a < 220; a++)
	  {
	    
	     float var_a=B[a][b][a]-0.068;
	     float var_b=B[a][b-1][a-3]/0.431;
	    
	     B[a][b][a]=A[a]+0.444;
	     A[a]=A[a-4]+B[a][b][a];
	  }

    return 0;
}