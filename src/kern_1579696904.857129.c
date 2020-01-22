#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(480, "ones");
	double ***D = create_three_dim_double(550, 220, 330, "ones");
	double **B = create_two_dim_double(560, 420, "ones");
	double **A = create_two_dim_double(940, 960, "ones");
	double **C = create_two_dim_double(650, 220, "ones");

	for (int b = 4; b < 220; b++)
	  for (int a = 3; a < 550; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-4][a-3]+A[a][b]*B[a][b]/C[a][b]-E[a];
	  }

    return 0;
}