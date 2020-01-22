#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(340, "zeros");
	float **C = create_two_dim_float(690, 60, "zeros");
	float **B = create_two_dim_float(660, 320, "zeros");

	for (int b = 4; b < 60; b++)
	  for (int a = 5; a < 340; a++)
	  {
	    
	     A[a]=A[a-5]*0.95;
	    
	     B[a][b]=A[a]/C[a][b];
	     B[a-2][b-4]=0.124;
	    
	     float var_a=C[a][b]+0.788;
	     float var_b=C[a-4][b]*0.205;
	  }

    return 0;
}