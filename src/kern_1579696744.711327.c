#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(190, 320, 240, "ones");
	float *C = create_one_dim_float(830, "ones");
	float *A = create_one_dim_float(880, "ones");
	float **B = create_two_dim_float(10, 740, "ones");

	for (int c = 0; c < 740; c++)
	  for (int b = 5; b < 5; b++)
	    for (int a = 5; a < 5; a++)
	    {
	      
	      C[a]=C[a-5]/0.898;
	      
	      D[a][b][c]=B[a][b]+C[a]/A[a]*D[a][b][c];
	      A[a]=B[a+5][b]+A[a]*D[a][b][c];
	    }

    return 0;
}