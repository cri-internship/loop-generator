#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(840, 220, "ones");
	float *E = create_one_dim_float(100, "ones");
	float *B = create_one_dim_float(100, "ones");
	float ***A = create_three_dim_float(110, 110, 240, "ones");
	float *C = create_one_dim_float(270, "ones");

	for (int c = 5; c < 240; c++)
	  for (int b = 3; b < 110; b++)
	    for (int a = 4; a < 110; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c-5]-B[a]/D[a][b]*C[a]+E[a];
	    }

    return 0;
}