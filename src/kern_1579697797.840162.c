#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(720, "zeros");
	float ***B = create_three_dim_float(170, 960, 790, "zeros");
	float ***A = create_three_dim_float(560, 850, 440, "zeros");
	float ***C = create_three_dim_float(360, 460, 510, "zeros");
	float ***D = create_three_dim_float(630, 440, 870, "zeros");

	for (int b = 1; b < 440; b++)
	  for (int a = 5; a < 360; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b][a-4]+0.48;
	    
	     float var_a=D[a][b][a]/0.084;
	     float var_b=D[a-4][b-1][a-5]*0.263;
	  }

    return 0;
}