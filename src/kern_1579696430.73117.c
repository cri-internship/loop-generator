#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(100, "zeros");
	double **B = create_two_dim_double(670, 540, "zeros");
	double **A = create_two_dim_double(900, 830, "zeros");

	for (int c = 5; c < 536; c++)
	  for (int b = 4; b < 668; b++)
	    for (int a = 4; a < 668; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]-0.617;
	      
	      A[a][b]=A[a-2][b-5]/0.66;
	      
	      B[a][b]=C[a]/0.023;
	      
	      double var_a=A[a][b]/0.486;
	      double var_b=A[a][b]-0.864;
	    }

    return 0;
}