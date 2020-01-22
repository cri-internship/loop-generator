#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(920, 660, "zeros");

	for (int c = 5; c < 656; c++)
	  for (int b = 4; b < 918; b++)
	    for (int a = 4; a < 918; a++)
	    {
	      
	      A[a][b]=0.108;
	      A[a-4][b-5]=0.726;
	      
	      A[a][b]=0.771;
	    }

    return 0;
}