#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(920, 40, "random");
	float *B = create_one_dim_float(210, "random");
	float *C = create_one_dim_float(390, "random");
	float ***E = create_three_dim_float(280, 380, 570, "random");
	float *A = create_one_dim_float(770, "random");

	for (int b = 0; b < 378; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     C[a]=C[a-3]*0.038;
	    
	     E[a][b][a]=D[a][b]/C[a]+A[a];
	     E[a+3][b][a]=B[a]-D[a][b];
	    
	     C[a]=E[a][b][a];
	    
	     E[a][b][a]=0.994;
	    
	     B[a]=0.826;
	     B[a-3]=0.898;
	  }

    return 0;
}