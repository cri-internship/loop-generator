#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(540, "ones");
	double *A = create_one_dim_double(950, "ones");

	for (int c = 4; c < 539; c++)
	  for (int b = 4; b < 539; b++)
	    for (int a = 4; a < 539; a++)
	    {
	      
	      B[a]=A[a];
	      B[a+1]=0.676;
	      
	      B[a]=A[a]+B[a];
	      A[a]=A[a-4]/B[a];
	    }

    return 0;
}