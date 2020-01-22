#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(790, 340, "zeros");
	float ***E = create_three_dim_float(240, 340, 360, "zeros");
	float **B = create_two_dim_float(540, 310, "zeros");
	float *D = create_one_dim_float(620, "zeros");
	float **A = create_two_dim_float(680, 630, "zeros");

	for (int b = 2; b < 308; b++)
	  for (int a = 2; a < 536; a++)
	  {
	    
	     C[a][b]=C[a-2][b-2]+E[a][b][a]/0.776;
	    
	     C[a][b]=B[a][b];
	    
	     float var_a=B[a][b]*0.046;
	     float var_b=B[a+4][b+2]+0.206;
	  }

    return 0;
}