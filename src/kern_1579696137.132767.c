#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(990, 680, "zeros");

	for (int c = 5; c < 680; c++)
	  for (int b = 0; b < 990; b++)
	    for (int a = 0; a < 990; a++)
	    {
	      
	      A[a][b]=A[a][b-5]/0.601;
	    }

    return 0;
}