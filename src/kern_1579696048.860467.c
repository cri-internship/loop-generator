#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(890, "zeros");
	float *B = create_one_dim_float(80, "zeros");

	for (int c = 4; c < 885; c++)
	  for (int b = 4; b < 885; b++)
	    for (int a = 4; a < 885; a++)
	    {
	      
	      float var_a=A[a]+0.805;
	      A[a]=0.754;
	      
	      A[a]=0.029;
	      
	      A[a]=A[a]*B[a];
	      B[a]=A[a+1]+0.385;
	      
	      float var_b=A[a]/0.567;
	      float var_c=A[a-4]-0.35;
	    }

    return 0;
}