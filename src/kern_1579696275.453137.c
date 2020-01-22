#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(800, 330, 550, "ones");
	double *B = create_one_dim_double(890, "ones");
	double **A = create_two_dim_double(990, 830, "ones");
	double *E = create_one_dim_double(250, "ones");
	double *C = create_one_dim_double(750, "ones");

	for (int b = 2; b < 330; b++)
	  for (int a = 5; a < 250; a++)
	  {
	    
	     B[a]=B[a-5]/0.846;
	    
	     D[a][b][a]=D[a-5][b-2][a-4]*C[a]-E[a]+B[a]/A[a][b];
	    
	     E[a]=E[a-3]+0.834;
	    
	     double var_a=A[a][b]-0.185;
	     double var_b=A[a+5][b+2]/0.599;
	  }

    return 0;
}