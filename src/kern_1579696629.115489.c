#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(570, "ones");
	float *B = create_one_dim_float(180, "ones");
	float **D = create_two_dim_float(560, 220, "ones");
	float ***C = create_three_dim_float(170, 840, 380, "ones");

	for (int c = 3; c < 376; c++)
	  for (int b = 1; b < 835; b++)
	    for (int a = 0; a < 169; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-3]*0.96;
	      
	      A[a]=A[a+2]-0.163;
	      
	      C[a][b][c]=0.607;
	    }

    return 0;
}