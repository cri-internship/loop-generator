#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(660, 410, "ones");
	double **B = create_two_dim_double(140, 1000, "ones");
	double *C = create_one_dim_double(90, "ones");

	for (int d = 5; d < 1000; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 4; b < 140; b++)
	      for (int a = 4; a < 140; a++)
	      {
	        
	       B[a][b]=B[a-4][b-5]+0.49;
	      }

    return 0;
}