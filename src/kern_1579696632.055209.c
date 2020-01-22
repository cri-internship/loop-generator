#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(410, "random");
	double *A = create_one_dim_double(330, "random");

	for (int d = 4; d < 410; d++)
	  for (int c = 4; c < 410; c++)
	    for (int b = 4; b < 410; b++)
	      for (int a = 4; a < 410; a++)
	      {
	        
	       A[a]=B[a]/A[a];
	       B[a]=B[a-4]/A[a];
	      }

    return 0;
}