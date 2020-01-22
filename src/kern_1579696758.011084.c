#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(540, "ones");
	double **A = create_two_dim_double(870, 20, "ones");

	for (int d = 2; d < 19; d++)
	  for (int c = 4; c < 537; c++)
	    for (int b = 4; b < 537; b++)
	      for (int a = 4; a < 537; a++)
	      {
	        
	       B[a]=B[a-2]/A[a][b];
	        
	       A[a][b]=A[a][b-2]*0.941;
	        
	       B[a]=A[a][b];
	        
	       A[a][b]=0.209;
	      }

    return 0;
}