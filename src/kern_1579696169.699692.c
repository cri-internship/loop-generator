#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(170, "random");
	double ***A = create_three_dim_double(100, 980, 660, "random");
	double **C = create_two_dim_double(800, 10, "random");

	for (int b = 4; b < 10; b++)
	  for (int a = 5; a < 100; a++)
	  {
	    
	     C[a][b]=C[a-2][b-3]*B[a];
	    
	     A[a][b][a]=A[a-1][b-4][a-5]+0.951;
	    
	     double var_a=B[a]-0.137;
	     double var_b=B[a+3]/0.535;
	  }

    return 0;
}