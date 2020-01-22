#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(570, 950, "random");
	double ***A = create_three_dim_double(80, 400, 880, "random");
	double *C = create_one_dim_double(780, "random");

	for (int b = 2; b < 950; b++)
	  for (int a = 0; a < 570; a++)
	  {
	    
	     C[a]=B[a][b]-A[a][b][a]*C[a];
	     A[a][b][a]=B[a][b-2]+A[a][b][a]-C[a];
	  }

    return 0;
}