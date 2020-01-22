#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(1000, "ones");
	double **B = create_two_dim_double(130, 450, "ones");

	for (int b = 4; b < 448; b++)
	  for (int a = 2; a < 125; a++)
	  {
	    
	     A[a]=A[a-2]/0.28;
	    
	     B[a][b]=B[a-1][b-4]/A[a];
	    
	     B[a][b]=B[a+3][b+1]-0.315;
	    
	     B[a][b]=A[a];
	    
	     B[a][b]=A[a]+0.691;
	     A[a]=A[a+4]*B[a][b];
	  }

    return 0;
}