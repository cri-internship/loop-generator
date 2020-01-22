#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(780, "ones");
	float **A = create_two_dim_float(720, 880, "ones");
	float ***D = create_three_dim_float(20, 940, 570, "ones");
	float *C = create_one_dim_float(980, "ones");

	for (int d = 0; d < 570; d++)
	  for (int c = 5; c < 880; c++)
	    for (int b = 3; b < 20; b++)
	      for (int a = 3; a < 20; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-5][c]+0.502;
	        
	       float var_a=A[a][b]*0.019;
	       float var_b=A[a-3][b-2]/0.222;
	      }

    return 0;
}