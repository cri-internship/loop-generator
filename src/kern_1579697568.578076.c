#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(780, 130, "random");
	float **B = create_two_dim_float(260, 160, "random");

	for (int c = 2; c < 130; c++)
	  for (int b = 4; b < 260; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]+0.324;
	      
	      A[a][b]=A[a-1][b-1]*0.923;
	    }

    return 0;
}