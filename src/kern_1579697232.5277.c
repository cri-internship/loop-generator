#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(490, 950, 70, "ones");
	float ***C = create_three_dim_float(670, 470, 70, "ones");
	float ***D = create_three_dim_float(550, 910, 890, "ones");
	float *A = create_one_dim_float(540, "ones");

	for (int c = 0; c < 70; c++)
	  for (int b = 4; b < 470; b++)
	    for (int a = 1; a < 670; a++)
	    {
	      
	      float var_a=C[a][b][c]+0.967;
	      float var_b=C[a-1][b-4][c]-0.263;
	    }

    return 0;
}