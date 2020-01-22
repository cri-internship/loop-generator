#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(640, "zeros");
	float *D = create_one_dim_float(640, "zeros");
	float *A = create_one_dim_float(120, "zeros");
	float *C = create_one_dim_float(560, "zeros");

	for (int c = 5; c < 560; c++)
	  for (int b = 5; b < 560; b++)
	    for (int a = 5; a < 560; a++)
	    {
	      
	      C[a]=C[a-5]/D[a];
	      
	      B[a]=B[a-5]/0.145;
	      
	      B[a]=0.383;
	      
	      D[a]=C[a]+A[a]-B[a];
	      D[a-2]=C[a];
	      
	      float var_a=D[a]/0.859;
	      float var_b=D[a]*0.167;
	    }

    return 0;
}