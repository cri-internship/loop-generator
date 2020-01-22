#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(260, 450, "ones");
	float **B = create_two_dim_float(900, 960, "ones");
	float *A = create_one_dim_float(830, "ones");
	float ***E = create_three_dim_float(170, 880, 440, "ones");
	float *C = create_one_dim_float(450, "ones");

	for (int c = 3; c < 440; c++)
	  for (int b = 2; b < 450; b++)
	    for (int a = 3; a < 170; a++)
	    {
	      
	      D[a][b]=0.105;
	      float  var_a=D[a][b]+0.209;
	      
	      A[a]=E[a][b][c]*0.46;
	      C[a]=E[a-3][b][c-3]-B[a][b];
	      
	      B[a][b]=D[a][b]+0.077-C[a]/E[a][b][c];
	      D[a][b]=D[a-3][b-2]*C[a]/A[a];
	    }

    return 0;
}