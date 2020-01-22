#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(590, 320, "random");
	double ***D = create_three_dim_double(900, 40, 630, "random");
	double *B = create_one_dim_double(980, "random");
	double *C = create_one_dim_double(780, "random");

	for (int b = 0; b < 40; b++)
	  for (int a = 4; a < 900; a++)
	  {
	    
	     D[a][b][a]=B[a];
	     D[a-4][b][a]=A[a][b]/0.115*A[a][b];
	  }

    return 0;
}