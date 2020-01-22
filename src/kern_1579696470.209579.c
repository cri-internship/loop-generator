#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(880, "random");
	float **D = create_two_dim_float(740, 580, "random");
	float ***C = create_three_dim_float(730, 970, 760, "random");
	float *A = create_one_dim_float(30, "random");

	for (int b = 1; b < 580; b++)
	  for (int a = 3; a < 730; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-1][a]+A[a]*B[a];
	    
	     float var_a=D[a][b]+0.692;
	     float var_b=D[a-3][b-1]-0.961;
	  }

    return 0;
}