#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 780, 630, "ones");
	double **A = create_two_dim_double(520, 210, "ones");
	double *C = create_one_dim_double(990, "ones");
	double *D = create_one_dim_double(420, "ones");

	for (int b = 0; b < 420; b++)
	  for (int a = 0; a < 420; a++)
	  {
	    
	     D[a]=D[a]*C[a]-A[a][b]/B[a][b][a];
	     D[a]=C[a];
	    
	     C[a]=0.537;
	     C[a]=0.304;
	  }

    return 0;
}