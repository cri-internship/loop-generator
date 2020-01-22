#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(500, 290, "ones");
	double **B = create_two_dim_double(800, 40, "ones");
	double *A = create_one_dim_double(410, "ones");
	double *E = create_one_dim_double(120, "ones");
	double **D = create_two_dim_double(830, 90, "ones");

	for (int b = 3; b < 410; b++)
	  for (int a = 3; a < 410; a++)
	  {
	    
	     A[a]=A[a-3]+0.283-C[a][b]/B[a][b];
	  }

    return 0;
}