#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(730, "ones");
	double **B = create_two_dim_double(380, 200, "ones");

	for (int b = 3; b < 195; b++)
	  for (int a = 5; a < 377; a++)
	  {
	    
	     A[a]=A[a-4]/0.768;
	    
	     A[a]=A[a-5]/0.132;
	    
	     B[a][b]=B[a+2][b+5]*A[a];
	    
	     B[a][b]=0.633;
	    
	     double var_a=A[a]/0.116;
	     double var_b=A[a-1]+0.308;
	  }

    return 0;
}