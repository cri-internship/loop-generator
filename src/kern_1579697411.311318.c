#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(90, "zeros");
	double *A = create_one_dim_double(220, "zeros");
	double **B = create_two_dim_double(960, 940, "zeros");

	for (int c = 0; c < 940; c++)
	  for (int b = 1; b < 90; b++)
	    for (int a = 1; a < 90; a++)
	    {
	      
	      A[a]=A[a+1]*C[a]+B[a][b];
	      
	      A[a]=B[a][b]-A[a]+C[a];
	      B[a][b]=C[a];
	      
	      double var_a=C[a]-0.79;
	      double var_b=C[a-1]-0.618;
	    }

    return 0;
}