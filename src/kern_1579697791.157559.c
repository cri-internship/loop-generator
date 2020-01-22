#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(630, 80, "ones");
	float *B = create_one_dim_float(920, "ones");

	for (int b = 4; b < 80; b++)
	  for (int a = 4; a < 630; a++)
	  {
	    
	     B[a]=B[a+1]*A[a][b];
	    
	     B[a]=B[a+4]-A[a][b];
	    
	     float var_a=A[a][b]/0.054;
	     float var_b=A[a-4][b-4]+0.453;
	    
	     float var_c=B[a]/0.867;
	     float var_d=B[a+5]+0.66;
	    
	     B[a]=B[a]/A[a][b];
	  }

    return 0;
}