#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(420, 510, "ones");
	float *B = create_one_dim_float(680, "ones");
	float ***C = create_three_dim_float(250, 580, 870, "ones");
	float *A = create_one_dim_float(300, "ones");

	for (int c = 2; c < 510; c++)
	  for (int b = 4; b < 420; b++)
	    for (int a = 4; a < 420; a++)
	    {
	      
	      D[a][b]=D[a-4][b-2]/0.63;
	      
	      B[a]=0.035;
	      B[a-4]=0.615;
	      
	      float var_a=B[a]*0.061;
	      float var_b=B[a]*0.266;
	    }

    return 0;
}