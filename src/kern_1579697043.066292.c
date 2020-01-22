#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(750, "zeros");
	float **A = create_two_dim_float(540, 90, "zeros");

	for (int c = 0; c < 90; c++)
	  for (int b = 0; b < 537; b++)
	    for (int a = 0; a < 537; a++)
	    {
	      
	      A[a][b]=0.303;
	      A[a+3][b]=0.301;
	    }

    return 0;
}