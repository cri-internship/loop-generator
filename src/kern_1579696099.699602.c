#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(20, "random");
	double **A = create_two_dim_double(470, 520, "random");

	for (int d = 2; d < 20; d++)
	  for (int c = 2; c < 20; c++)
	    for (int b = 2; b < 20; b++)
	      for (int a = 2; a < 20; a++)
	      {
	        
	       B[a]=B[a-2]/A[a][b];
	      }

    return 0;
}