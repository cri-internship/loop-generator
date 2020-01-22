#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 370, "ones");
	double *A = create_one_dim_double(400, "ones");

	for (int b = 3; b < 370; b++)
	  for (int a = 3; a < 400; a++)
	  {
	    
	     B[a][b]=B[a-2][b-3]/0.055;
	    
	     A[a]=A[a-2]+0.526;
	    
	     A[a]=B[a][b];
	  }

    return 0;
}