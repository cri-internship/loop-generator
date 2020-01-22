#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(100, 580, "ones");
	double *B = create_one_dim_double(490, "ones");

	for (int b = 0; b < 487; b++)
	  for (int a = 0; a < 487; a++)
	  {
	    
	     B[a]=A[a][b];
	     B[a+3]=A[a][b];
	  }

    return 0;
}