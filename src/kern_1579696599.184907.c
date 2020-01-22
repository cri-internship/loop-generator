#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(330, 900, "ones");
	float *A = create_one_dim_float(450, "ones");
	float **C = create_two_dim_float(490, 20, "ones");

	for (int b = 3; b < 19; b++)
	  for (int a = 3; a < 330; a++)
	  {
	    
	     B[a][b]=B[a][b-1]/A[a];
	    
	     C[a][b]=C[a-3][b-3]-0.907;
	    
	     C[a][b]=C[a+5][b+1]-0.349;
	    
	     A[a]=C[a][b]/B[a][b];
	     C[a][b]=C[a+4][b]+B[a][b]*A[a];
	    
	     float var_a=B[a][b]+0.265;
	     float var_b=B[a-1][b-3]*0.219;
	  }

    return 0;
}