#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(970, 220, 110, "ones");
	double *A = create_one_dim_double(640, "ones");
	double *C = create_one_dim_double(580, "ones");
	double *D = create_one_dim_double(1000, "ones");

	for (int d = 0; d < 1000; d++)
	  for (int c = 0; c < 1000; c++)
	    for (int b = 0; b < 1000; b++)
	      for (int a = 0; a < 1000; a++)
	      {
	        
	       A[a]=D[a]/B[a][b][c]-A[a]*C[a];
	       D[a]=B[a][b][c]+C[a]/A[a];
	      }

    return 0;
}