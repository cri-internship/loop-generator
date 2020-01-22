#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 210, "zeros");
	double *A = create_one_dim_double(230, "zeros");

	for (int b = 4; b < 210; b++)
	  for (int a = 1; a < 225; a++)
	  {
	    
	     B[a][b]=B[a-1][b-4]-A[a];
	    
	     A[a]=A[a]+B[a][b];
	     B[a][b]=A[a+5]+0.26;
	  }

    return 0;
}