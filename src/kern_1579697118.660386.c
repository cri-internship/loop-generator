#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(340, "random");
	double **D = create_two_dim_double(720, 250, "random");
	double **A = create_two_dim_double(730, 880, "random");
	double **B = create_two_dim_double(720, 910, "random");

	for (int d = 3; d < 910; d++)
	  for (int c = 5; c < 340; c++)
	    for (int b = 5; b < 340; b++)
	      for (int a = 5; a < 340; a++)
	      {
	        
	       C[a]=C[a-5]+A[a][b];
	        
	       double var_a=B[a][b]*0.688;
	       double var_b=B[a-1][b-3]+0.519;
	      }

    return 0;
}