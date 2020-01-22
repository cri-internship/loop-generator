#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 190, "ones");
	float *B = create_one_dim_float(780, "ones");

	for (int c = 5; c < 190; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 5; a < 70; a++)
	    {
	      
	      B[a]=B[a-5]*0.618;
	      
	      B[a]=A[a][b];
	      
	      A[a][b]=B[a];
	      A[a-1][b-5]=0.712;
	    }

    return 0;
}