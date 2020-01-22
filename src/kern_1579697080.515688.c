#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(40, 30, "ones");

	for (int c = 5; c < 28; c++)
	  for (int b = 5; b < 37; b++)
	    for (int a = 5; a < 37; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]-0.162;
	      
	      A[a][b]=A[a-1][b-1]/0.395;
	      
	      A[a][b]=A[a-4][b-5]-0.218;
	      
	      A[a][b]=A[a+3][b+2]-0.21;
	    }

    return 0;
}