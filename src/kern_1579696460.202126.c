#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(200, "zeros");
	float ***C = create_three_dim_float(60, 10, 450, "zeros");
	float *A = create_one_dim_float(780, "zeros");
	float **B = create_two_dim_float(960, 680, "zeros");

	for (int d = 4; d < 680; d++)
	  for (int c = 2; c < 960; c++)
	    for (int b = 2; b < 960; b++)
	      for (int a = 2; a < 960; a++)
	      {
	        
	       B[a][b]=B[a-2][b-4]*0.405;
	      }

    return 0;
}