#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(980, 950, "zeros");

	for (int b = 3; b < 950; b++)
	  for (int a = 5; a < 980; a++)
	  {
	    
	     A[a][b]=A[a-5][b-3]/0.108;
	  }

    return 0;
}