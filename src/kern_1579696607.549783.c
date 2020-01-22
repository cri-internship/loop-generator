#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 910, "ones");
	double **B = create_two_dim_double(440, 420, "ones");

	for (int b = 0; b < 415; b++)
	  for (int a = 1; a < 438; a++)
	  {
	    
	     B[a][b]=B[a-1][b]/A[a][b];
	    
	     B[a][b]=B[a+2][b+5]+0.503;
	  }

    return 0;
}