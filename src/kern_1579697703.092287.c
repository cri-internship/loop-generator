#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "zeros");
	float *B = create_one_dim_float(200, "zeros");
	float ***C = create_three_dim_float(370, 500, 610, "zeros");

	for (int d = 5; d < 607; d++)
	  for (int c = 4; c < 496; c++)
	    for (int b = 4; b < 195; b++)
	      for (int a = 4; a < 195; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-1][c-2]*0.231;
	        
	       C[a][b][c]=C[a][b-1][c-5]+0.797;
	        
	       C[a][b][c]=C[a-4][b-4][c]/0.461;
	        
	       B[a]=0.988;
	       B[a+5]=0.732;
	        
	       float var_a=C[a][b][c]*0.162;
	       float var_b=C[a+4][b+4][c+3]-0.605;
	      }

    return 0;
}