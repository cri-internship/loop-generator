#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(90, 230, 610, "zeros");
	float *A = create_one_dim_float(310, "zeros");
	float *B = create_one_dim_float(750, "zeros");

	for (int c = 1; c < 310; c++)
	  for (int b = 1; b < 310; b++)
	    for (int a = 1; a < 310; a++)
	    {
	      
	      A[a]=A[a-1]-C[a][b][c]+0.096;
	    }

    return 0;
}