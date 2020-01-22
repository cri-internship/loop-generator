#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(700, "random");
	float **B = create_two_dim_float(160, 650, "random");

	for (int b = 0; b < 645; b++)
	  for (int a = 5; a < 155; a++)
	  {
	    
	     A[a]=A[a-5]*B[a][b];
	    
	     A[a]=A[a-1]-0.309;
	    
	     float var_a=B[a][b]*0.832;
	     float var_b=B[a+1][b+5]/0.672;
	    
	     float var_c=B[a][b]/0.09;
	     float var_d=B[a+5][b+1]/0.573;
	    
	     float var_e=A[a]/0.446;
	  }

    return 0;
}