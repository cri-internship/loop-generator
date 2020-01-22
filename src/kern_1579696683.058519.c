#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(510, 1000, "ones");
	double **B = create_two_dim_double(250, 670, "ones");

	for (int c = 0; c < 666; c++)
	  for (int b = 0; b < 245; b++)
	    for (int a = 0; a < 245; a++)
	    {
	      
	      A[a][b]=A[a+4][b+2]/0.669;
	      
	      B[a][b]=0.996;
	      B[a+5][b+4]=A[a][b];
	    }

    return 0;
}