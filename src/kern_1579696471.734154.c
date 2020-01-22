#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(170, 560, "zeros");
	double *A = create_one_dim_double(330, "zeros");
	double **B = create_two_dim_double(160, 600, "zeros");

	for (int c = 4; c < 557; c++)
	  for (int b = 5; b < 155; b++)
	    for (int a = 5; a < 155; a++)
	    {
	      
	      B[a][b]=B[a-5][b-3]-C[a][b];
	      
	      C[a][b]=C[a+1][b+3]*0.613;
	      
	      B[a][b]=B[a+5][b+4]/A[a]*A[a];
	      
	      C[a][b]=0.365;
	      
	      B[a][b]=B[a][b]/C[a][b]+A[a];
	      C[a][b]=B[a+4][b]*A[a]/C[a][b];
	      
	      double var_a=B[a][b]+0.354;
	      double var_b=B[a-2][b]/0.434;
	    }

    return 0;
}