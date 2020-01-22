#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(380, "zeros");
	double **D = create_two_dim_double(680, 950, "zeros");
	double **B = create_two_dim_double(440, 180, "zeros");
	double *C = create_one_dim_double(570, "zeros");
	double **A = create_two_dim_double(680, 130, "zeros");

	for (int b = 5; b < 130; b++)
	  for (int a = 4; a < 436; a++)
	  {
	    
	     B[a][b]=B[a+4][b+2]-D[a][b]/E[a]+C[a]*A[a][b];
	    
	     D[a][b]=D[a+2][b+4]-0.441;
	    
	     A[a][b]=0.497;
	     A[a][b]=0.561;
	    
	     C[a]=0.943;
	     C[a+3]=0.119;
	    
	     B[a][b]=0.301;
	  }

    return 0;
}