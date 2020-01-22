#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(970, "ones");
	double *A = create_one_dim_double(320, "ones");

	for (int b = 3; b < 970; b++)
	  for (int a = 3; a < 970; a++)
	  {
	    
	     B[a]=B[a]-A[a];
	     A[a]=B[a-3]-A[a];
	  }

    return 0;
}