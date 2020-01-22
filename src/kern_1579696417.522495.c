#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(280, 10, "random");
	float *A = create_one_dim_float(530, "random");

	for (int b = 5; b < 7; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     A[a]=A[a-2]*0.048;
	    
	     B[a][b]=B[a][b+3]*0.646;
	    
	     A[a]=B[a][b];
	    
	     B[a][b]=0.901;
	    
	     B[a][b]=B[a][b]+A[a];
	     A[a]=B[a-3][b-2]+0.702;
	    
	     float var_a=A[a]*0.298;
	     float var_b=A[a-4]+0.858;
	  }

    return 0;
}