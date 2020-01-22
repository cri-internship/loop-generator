#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(100, "zeros");
	float ***A = create_three_dim_float(260, 210, 780, "zeros");
	float ***C = create_three_dim_float(790, 120, 670, "zeros");
	float *B = create_one_dim_float(290, "zeros");

	for (int b = 5; b < 120; b++)
	  for (int a = 4; a < 290; a++)
	  {
	    
	     B[a]=0.122;
	     B[a-2]=0.396;
	    
	     B[a]=0.24+D[a];
	    
	     float var_a=C[a][b][a]+0.262;
	     float var_b=C[a-1][b-5][a-4]+0.387;
	  }

    return 0;
}