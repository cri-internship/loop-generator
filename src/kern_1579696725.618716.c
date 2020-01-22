#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(760, 920, 210, "zeros");
	float ***E = create_three_dim_float(740, 740, 620, "zeros");
	float **A = create_two_dim_float(270, 280, "zeros");
	float *D = create_one_dim_float(1000, "zeros");
	float *C = create_one_dim_float(880, "zeros");

	for (int c = 2; c < 210; c++)
	  for (int b = 5; b < 920; b++)
	    for (int a = 2; a < 760; a++)
	    {
	      
	      C[a]=0.701;
	      float  var_a=C[a]-0.477;
	      
	      D[a]=0.86;
	      D[a+5]=0.236;
	      
	      float var_b=B[a][b][c]/0.759;
	      float var_c=B[a-2][b-5][c-2]/0.758;
	    }

    return 0;
}