#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(780, "ones");
	float **A = create_two_dim_float(300, 120, "ones");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 300; a++)
	  {
	    
	     A[a][b]=A[a][b]-B[a];
	     B[a]=A[a][b+5]-B[a];
	  }

    return 0;
}