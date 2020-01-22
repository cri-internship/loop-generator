#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 680, "zeros");
	float **D = create_two_dim_float(510, 460, "zeros");
	float ***C = create_three_dim_float(150, 170, 880, "zeros");
	float ***B = create_three_dim_float(270, 510, 610, "zeros");

	for (int c = 0; c < 609; c++)
	  for (int b = 0; b < 509; b++)
	    for (int a = 4; a < 269; a++)
	    {
	      
	      A[a][b]=A[a-4][b]-0.246;
	      
	      float var_a=B[a][b][c]-0.339;
	      float var_b=B[a+1][b+1][c+1]/0.825;
	    }

    return 0;
}