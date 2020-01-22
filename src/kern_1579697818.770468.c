#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(670, "ones");
	double *D = create_one_dim_double(460, "ones");
	double *A = create_one_dim_double(50, "ones");
	double *B = create_one_dim_double(950, "ones");

	for (int b = 5; b < 50; b++)
	  for (int a = 5; a < 50; a++)
	  {
	    
	     C[a]=C[a-5]-0.384;
	    
	     double var_a=D[a]-0.523;
	     D[a]=0.824;
	    
	     D[a]=D[a+1]+0.735;
	    
	     C[a]=A[a]*C[a]-D[a];
	     B[a]=A[a-1]+C[a]*D[a];
	    
	     A[a]=A[a]+C[a];
	  }

    return 0;
}