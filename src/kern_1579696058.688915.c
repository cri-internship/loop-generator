#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(260, 420, 520, "random");
	double *A = create_one_dim_double(590, "random");

	for (int b = 1; b < 420; b++)
	  for (int a = 4; a < 260; a++)
	  {
	    
	     A[a]=0.36;
	     A[a-4]=0.362;
	    
	     double var_a=B[a][b][a]+0.052;
	     double var_b=B[a-2][b-1][a-4]/0.012;
	  }

    return 0;
}