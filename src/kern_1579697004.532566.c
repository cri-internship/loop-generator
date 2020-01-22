#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(590, "ones");
	double *E = create_one_dim_double(330, "ones");
	double **D = create_two_dim_double(750, 410, "ones");
	double *A = create_one_dim_double(530, "ones");
	double *C = create_one_dim_double(230, "ones");

	for (int b = 4; b < 327; b++)
	  for (int a = 4; a < 327; a++)
	  {
	    
	     E[a]=E[a-4]*B[a]/A[a];
	    
	     E[a]=E[a+3]/0.536;
	    
	     A[a]=A[a+1]+D[a][b]*E[a]-C[a];
	    
	     double var_a=E[a]+0.372;
	     double var_b=E[a-3]*0.357;
	  }

    return 0;
}