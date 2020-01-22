#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(610, "random");

	for (int b = 1; b < 610; b++)
	  for (int a = 1; a < 610; a++)
	  {
	    
	     A[a]=0.62;
	     A[a]=0.855;
	  }

    return 0;
}