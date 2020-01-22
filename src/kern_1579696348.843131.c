#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(450, "zeros");
	float ***B = create_three_dim_float(250, 240, 310, "zeros");

	for (int c = 5; c < 310; c++)
	  for (int b = 5; b < 240; b++)
	    for (int a = 5; a < 250; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-3][c-2]-0.084;
	      
	      A[a]=A[a+2]/0.625;
	      
	      B[a][b][c]=0.031;
	    }

    return 0;
}