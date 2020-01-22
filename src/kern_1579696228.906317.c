#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(130, "random");
	double **B = create_two_dim_double(440, 180, "random");
	double **C = create_two_dim_double(1000, 770, "random");
	double **A = create_two_dim_double(990, 420, "random");
	double **D = create_two_dim_double(460, 730, "random");

	for (int b = 1; b < 180; b++)
	  for (int a = 3; a < 440; a++)
	  {
	    
	     B[a][b]=B[a-3][b-1]/A[a][b]-0.256;
	  }

    return 0;
}