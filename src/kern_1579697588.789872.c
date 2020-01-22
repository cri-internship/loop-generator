#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(570, "random");
	float *A = create_one_dim_float(250, "random");
	float *E = create_one_dim_float(930, "random");
	float **B = create_two_dim_float(640, 610, "random");
	float *D = create_one_dim_float(530, "random");

	for (int b = 4; b < 250; b++)
	  for (int a = 4; a < 250; a++)
	  {
	    
	     E[a]=E[a-4]+0.241;
	    
	     C[a]=E[a]/A[a]+B[a][b];
	     C[a+5]=D[a]-D[a];
	    
	     float var_a=A[a]+0.919;
	  }

    return 0;
}