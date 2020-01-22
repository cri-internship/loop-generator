#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(250, 440, "ones");
	float *B = create_one_dim_float(260, "ones");

	for (int b = 1; b < 260; b++)
	  for (int a = 1; a < 260; a++)
	  {
	    
	     B[a]=A[a][b];
	     B[a-1]=A[a][b];
	  }

    return 0;
}