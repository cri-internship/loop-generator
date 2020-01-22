#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(380, 70, 630, "zeros");
	float ***B = create_three_dim_float(480, 140, 540, "zeros");
	float *A = create_one_dim_float(670, "zeros");
	float *D = create_one_dim_float(890, "zeros");
	float *E = create_one_dim_float(580, "zeros");

	for (int d = 0; d < 627; d++)
	  for (int c = 4; c < 69; c++)
	    for (int b = 4; b < 380; b++)
	      for (int a = 4; a < 380; a++)
	      {
	        
	       D[a]=D[a-4]*0.38;
	        
	       float var_a=C[a][b][c]/0.432;
	       float var_b=C[a-4][b-4][c]/0.269;
	        
	       float var_c=C[a][b][c]/0.096;
	       float var_d=C[a][b+1][c+3]*0.183;
	      }

    return 0;
}