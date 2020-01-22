#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(870, "ones");
	double **B = create_two_dim_double(640, 340, "ones");

	for (int b = 5; b < 866; b++)
	  for (int a = 5; a < 866; a++)
	  {
	    
	     A[a]=A[a+4]-B[a][b];
	    
	     A[a]=0.387;
	  }

    return 0;
}