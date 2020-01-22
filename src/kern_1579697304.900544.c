#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(210, "random");
	double *B = create_one_dim_double(880, "random");
	double **D = create_two_dim_double(740, 780, "random");
	double **C = create_two_dim_double(420, 100, "random");

	for (int b = 3; b < 100; b++)
	  for (int a = 1; a < 420; a++)
	  {
	    
	     D[a][b]=D[a-1][b-3]-0.56*B[a]+C[a][b];
	    
	     C[a][b]=C[a][b-3]/0.93;
	  }

    return 0;
}