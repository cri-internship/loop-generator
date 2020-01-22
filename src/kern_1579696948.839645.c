#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 20, 270, "ones");
	float *C = create_one_dim_float(230, "ones");
	float *D = create_one_dim_float(760, "ones");
	float *B = create_one_dim_float(120, "ones");

	for (int d = 4; d < 115; d++)
	  for (int c = 4; c < 115; c++)
	    for (int b = 4; b < 115; b++)
	      for (int a = 4; a < 115; a++)
	      {
	        
	       C[a]=C[a-2]+A[a][b][c]/B[a];
	        
	       C[a]=C[a-4]+0.53;
	        
	       D[a]=0.756;
	       D[a]=0.249;
	        
	       float var_a=B[a]/0.545;
	       float var_b=B[a+5]+0.082;
	      }

    return 0;
}