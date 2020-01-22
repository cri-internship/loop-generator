#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(70, 530, "zeros");
	float *B = create_one_dim_float(700, "zeros");
	float **D = create_two_dim_float(900, 840, "zeros");
	float **C = create_two_dim_float(840, 260, "zeros");
	float *A = create_one_dim_float(750, "zeros");

	for (int c = 0; c < 528; c++)
	  for (int b = 0; b < 65; b++)
	    for (int a = 0; a < 65; a++)
	    {
	      
	      E[a][b]=E[a+5][b+2]*0.225;
	      
	      float var_a=B[a]/0.186;
	      float var_b=B[a+5]+0.221;
	    }

    return 0;
}