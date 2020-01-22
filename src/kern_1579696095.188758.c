#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(30, "zeros");
	float *A = create_one_dim_float(470, "zeros");
	float ***C = create_three_dim_float(40, 700, 190, "zeros");

	for (int c = 0; c < 190; c++)
	  for (int b = 2; b < 700; b++)
	    for (int a = 3; a < 30; a++)
	    {
	      
	      B[a]=A[a];
	      B[a]=B[a]*C[a][b][c]/A[a];
	      
	      A[a]=B[a]/C[a][b][c];
	      B[a]=A[a];
	      
	      float var_a=C[a][b][c]*0.374;
	      float var_b=C[a-3][b-2][c]/0.446;
	    }

    return 0;
}