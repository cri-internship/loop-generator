#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(570, "random");
	double *B = create_one_dim_double(820, "random");
	double *C = create_one_dim_double(160, "random");
	double **D = create_two_dim_double(520, 290, "random");

	for (int d = 1; d < 570; d++)
	  for (int c = 1; c < 570; c++)
	    for (int b = 1; b < 570; b++)
	      for (int a = 1; a < 570; a++)
	      {
	        
	       A[a]=A[a-1]*C[a];
	      }

    return 0;
}