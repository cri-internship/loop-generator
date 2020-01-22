#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(790, "random");
	float *C = create_one_dim_float(600, "random");
	float ***B = create_three_dim_float(100, 300, 710, "random");

	for (int b = 5; b < 595; b++)
	  for (int a = 5; a < 595; a++)
	  {
	    
	     A[a]=A[a-3]*0.089;
	    
	     C[a]=C[a-2]/0.616;
	    
	     C[a]=C[a+5]/A[a];
	    
	     A[a]=0.129;
	    
	     float var_a=A[a]-0.379;
	     float var_b=A[a-1]/0.632;
	  }

    return 0;
}