#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(820, 540, "random");
	float *A = create_one_dim_float(700, "random");
	float ***C = create_three_dim_float(140, 810, 350, "random");

	for (int d = 4; d < 350; d++)
	  for (int c = 3; c < 537; c++)
	    for (int b = 4; b < 138; b++)
	      for (int a = 4; a < 138; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+2][c]/B[a][b];
	        
	       float var_a=B[a][b]/0.344;
	       float var_b=B[a][b+3]*0.609;
	        
	       float var_c=C[a][b][c]-0.668;
	       float var_d=C[a-4][b-3][c-4]-0.17;
	      }

    return 0;
}