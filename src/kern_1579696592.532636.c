#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(210, 630, "zeros");
	float ***E = create_three_dim_float(1000, 800, 300, "zeros");
	float ***B = create_three_dim_float(270, 60, 140, "zeros");
	float **A = create_two_dim_float(290, 820, "zeros");
	float *D = create_one_dim_float(330, "zeros");

	for (int b = 4; b < 60; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     E[a][b][a]=E[a][b-4][a-5]/0.818;
	    
	     D[a]=D[a+5]-0.094;
	    
	     D[a]=C[a][b]+0.244;
	    
	     float var_a=B[a][b][a]/0.608;
	     float var_b=B[a-1][b-3][a-5]*0.379;
	  }

    return 0;
}