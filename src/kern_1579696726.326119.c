#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(330, "zeros");

	for (int c = 1; c < 330; c++)
	  for (int b = 1; b < 330; b++)
	    for (int a = 1; a < 330; a++)
	    {
	      
	      A[a]=0.111;
	      A[a-1]=0.576;
	    }

    return 0;
}