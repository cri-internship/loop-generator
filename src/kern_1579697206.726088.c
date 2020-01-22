#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(350, 420, "zeros");
	float *C = create_one_dim_float(410, "zeros");
	float *A = create_one_dim_float(120, "zeros");
	float ***D = create_three_dim_float(400, 690, 970, "zeros");

	for (int b = 5; b < 420; b++)
	  for (int a = 4; a < 120; a++)
	  {
	    
	     A[a]=0.019;
	     float  var_a=A[a]*0.664;
	    
	     B[a][b]=B[a-4][b-5]/0.635;
	    
	     D[a][b][a]=D[a+1][b+4][a]*0.782;
	    
	     float var_b=B[a][b]*0.752;
	     float var_c=B[a-2][b-4]+0.876;
	  }

    return 0;
}