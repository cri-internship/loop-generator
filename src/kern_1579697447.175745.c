#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(420, "zeros");

	for (int b = 1; b < 420; b++)
	  for (int a = 1; a < 420; a++)
	  {
	    
	     A[a]=0.067;
	     A[a-1]=0.496;
	  }

    return 0;
}