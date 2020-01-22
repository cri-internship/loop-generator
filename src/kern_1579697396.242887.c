#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(400, 50, "ones");
	float ***C = create_three_dim_float(310, 250, 440, "ones");
	float **B = create_two_dim_float(130, 640, "ones");

	for (int b = 5; b < 50; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     A[a][b]=A[a-3][b]+0.237*C[a][b][a];
	    
	     B[a][b]=A[a][b];
	     B[a][b-5]=C[a][b][a];
	  }

    return 0;
}