#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(780, 370, 360, "ones");
	float *A = create_one_dim_float(970, "ones");

	for (int b = 1; b < 368; b++)
	  for (int a = 4; a < 778; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-2]/0.958;
	    
	     B[a][b][a]=B[a+2][b+2][a]+0.951;
	    
	     float var_a=A[a]/0.991;
	     float var_b=A[a-2]+0.307;
	  }

    return 0;
}