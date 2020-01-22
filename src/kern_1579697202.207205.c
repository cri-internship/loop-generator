#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(690, 240, "ones");
	float **B = create_two_dim_float(480, 550, "ones");

	for (int b = 3; b < 550; b++)
	  for (int a = 1; a < 480; a++)
	  {
	    
	     B[a][b]=B[a][b-3]*0.887;
	    
	     B[a][b]=B[a][b]-A[a][b];
	     A[a][b]=B[a-1][b-1]-A[a][b];
	  }

    return 0;
}