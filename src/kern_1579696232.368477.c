#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "ones");
	double *B = create_one_dim_double(230, "ones");

	for (int c = 3; c < 950; c++)
	  for (int b = 3; b < 950; b++)
	    for (int a = 3; a < 950; a++)
	    {
	      
	      A[a]=A[a-1]-0.132;
	      
	      A[a]=A[a-3]-0.576;
	    }

    return 0;
}