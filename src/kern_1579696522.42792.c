#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(340, "zeros");
	float **C = create_two_dim_float(800, 450, "zeros");
	float **A = create_two_dim_float(370, 990, "zeros");
	float **E = create_two_dim_float(490, 40, "zeros");
	float *B = create_one_dim_float(600, "zeros");

	for (int b = 5; b < 40; b++)
	  for (int a = 3; a < 340; a++)
	  {
	    
	     D[a]=D[a-1]+0.002;
	    
	     E[a][b]=E[a-3][b-5]*B[a]+D[a]/A[a][b]-C[a][b];
	    
	     A[a][b]=A[a+5][b+3]+0.567;
	    
	     float var_a=C[a][b]/0.527;
	     float var_b=C[a+5][b+3]-0.997;
	  }

    return 0;
}