#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(830, "ones");
	double **B = create_two_dim_double(700, 900, "ones");

	for (int b = 4; b < 900; b++)
	  for (int a = 3; a < 697; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]*A[a];
	    
	     B[a][b]=B[a-2][b-4]*0.747;
	    
	     B[a][b]=0.33;
	    
	     double var_a=B[a][b]/0.874;
	     double var_b=B[a+3][b]*0.581;
	  }

    return 0;
}