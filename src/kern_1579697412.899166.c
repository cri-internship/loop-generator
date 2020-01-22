#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(1000, "ones");
	double *A = create_one_dim_double(480, "ones");

	for (int c = 4; c < 478; c++)
	  for (int b = 4; b < 478; b++)
	    for (int a = 4; a < 478; a++)
	    {
	      
	      B[a]=B[a-4]*0.86;
	      
	      A[a]=0.794;
	      A[a+2]=0.323;
	    }

    return 0;
}