#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(50, 10, "zeros");
	double *A = create_one_dim_double(150, "zeros");

	for (int c = 2; c < 10; c++)
	  for (int b = 2; b < 45; b++)
	    for (int a = 2; a < 45; a++)
	    {
	      
	      A[a]=0.227;
	      A[a]=0.24;
	      
	      A[a]=B[a][b]+A[a];
	      B[a][b]=B[a-2][b-2]+A[a];
	      
	      B[a][b]=A[a]+B[a][b];
	      B[a][b]=A[a-2]/B[a][b];
	      
	      double var_a=B[a][b]-0.41;
	      double var_b=B[a+5][b]-0.679;
	    }

    return 0;
}