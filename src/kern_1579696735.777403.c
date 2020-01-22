#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(760, 960, "ones");
	double ***C = create_three_dim_double(830, 670, 290, "ones");
	double *A = create_one_dim_double(360, "ones");

	for (int b = 4; b < 960; b++)
	  for (int a = 3; a < 360; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]/0.688;
	    
	     B[a][b]=B[a+5][b]*C[a][b][a];
	    
	     A[a]=B[a][b];
	     A[a]=B[a][b];
	  }

    return 0;
}