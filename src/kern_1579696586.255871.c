#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(970, 330, 230, "ones");
	float ***A = create_three_dim_float(480, 460, 680, "ones");
	float ***C = create_three_dim_float(230, 510, 720, "ones");
	float *B = create_one_dim_float(960, "ones");

	for (int b = 0; b < 960; b++)
	  for (int a = 0; a < 960; a++)
	  {
	    
	     float var_a=B[a]/0.479;
	     B[a]=0.784;
	  }

    return 0;
}