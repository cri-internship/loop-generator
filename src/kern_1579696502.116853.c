#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(420, "random");

	for (int c = 5; c < 420; c++)
	  for (int b = 5; b < 420; b++)
	    for (int a = 5; a < 420; a++)
	    {
	      
	      A[a]=0.417;
	      A[a]=0.68;
	    }

    return 0;
}