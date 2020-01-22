#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(830, "zeros");
	double *B = create_one_dim_double(180, "zeros");
	double ***C = create_three_dim_double(430, 220, 100, "zeros");

	for (int b = 5; b < 180; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     B[a]=0.079;
	     B[a-5]=0.852;
	    
	     C[a][b][a]=B[a]/A[a]-C[a][b][a];
	     A[a]=B[a-4]/A[a]*C[a][b][a];
	    
	     double var_a=B[a]+0.218;
	     double var_b=B[a-5]+0.532;
	  }

    return 0;
}