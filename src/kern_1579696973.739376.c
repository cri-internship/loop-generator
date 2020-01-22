#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(220, "ones");
	float ***D = create_three_dim_float(530, 300, 960, "ones");
	float *A = create_one_dim_float(510, "ones");
	float **C = create_two_dim_float(210, 510, "ones");

	for (int b = 0; b < 300; b++)
	  for (int a = 5; a < 215; a++)
	  {
	    
	     B[a]=C[a][b]+0.532/D[a][b][a];
	     A[a]=B[a]+D[a][b][a];
	    
	     B[a]=B[a-3]-D[a][b][a];
	    
	     B[a]=B[a+2]/0.242-D[a][b][a];
	    
	     float var_a=D[a][b][a]/0.149;
	     float var_b=D[a-1][b][a-1]/0.371;
	  }

    return 0;
}