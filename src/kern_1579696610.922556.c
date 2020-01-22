#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(340, "zeros");
	float **A = create_two_dim_float(690, 110, "zeros");
	float ***C = create_three_dim_float(360, 180, 520, "zeros");
	float *B = create_one_dim_float(880, "zeros");

	for (int c = 0; c < 339; c++)
	  for (int b = 0; b < 339; b++)
	    for (int a = 0; a < 339; a++)
	    {
	      
	      D[a]=0.663;
	      D[a+1]=0.516;
	      
	      float var_a=B[a]-0.372;
	      float var_b=B[a+2]-0.221;
	    }

    return 0;
}