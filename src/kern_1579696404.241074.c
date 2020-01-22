#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(970, 510, "random");
	float *A = create_one_dim_float(180, "random");
	float *D = create_one_dim_float(150, "random");
	float *E = create_one_dim_float(960, "random");
	float *C = create_one_dim_float(100, "random");

	for (int d = 0; d < 150; d++)
	  for (int c = 0; c < 150; c++)
	    for (int b = 0; b < 150; b++)
	      for (int a = 0; a < 150; a++)
	      {
	        
	       E[a]=D[a]/A[a]-C[a]+B[a][b];
	       D[a]=E[a];
	      }

    return 0;
}