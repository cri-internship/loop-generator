#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(860, 670, "ones");
	float **B = create_two_dim_float(70, 640, "ones");

	for (int c = 1; c < 639; c++)
	  for (int b = 3; b < 66; b++)
	    for (int a = 3; a < 66; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]-A[a][b];
	      
	      B[a][b]=A[a][b];
	    }

    return 0;
}