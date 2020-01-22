#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 310, 890, "zeros");
	float **B = create_two_dim_float(390, 760, "zeros");
	float ***D = create_three_dim_float(60, 450, 190, "zeros");
	float *C = create_one_dim_float(380, "zeros");

	for (int c = 1; c < 376; c++)
	  for (int b = 1; b < 376; b++)
	    for (int a = 1; a < 376; a++)
	    {
	      
	      C[a]=C[a-1]-B[a][b]+D[a][b][c]*A[a][b][c];
	      
	      C[a]=0.486;
	    }

    return 0;
}