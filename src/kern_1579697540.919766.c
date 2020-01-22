#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(980, "ones");
	double ***E = create_three_dim_double(790, 870, 990, "ones");
	double *A = create_one_dim_double(870, "ones");
	double *B = create_one_dim_double(830, "ones");
	double *D = create_one_dim_double(590, "ones");

	for (int b = 3; b < 825; b++)
	  for (int a = 3; a < 825; a++)
	  {
	    
	     C[a]=C[a-1]+0.199;
	    
	     A[a]=0.221;
	     A[a-3]=0.743;
	    
	     double var_a=C[a]*0.956;
	     double var_b=C[a+1]-0.855;
	    
	     B[a]=B[a]-0.95/D[a]+E[a][b][a]*C[a];
	     D[a]=B[a+5]+C[a];
	    
	     C[a]=A[a]+B[a]-D[a]/C[a]*E[a][b][a];
	     E[a][b][a]=A[a+3]/D[a]-B[a];
	  }

    return 0;
}