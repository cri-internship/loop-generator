#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(110, "ones");
	double **B = create_two_dim_double(730, 180, "ones");

	for (int d = 1; d < 180; d++)
	  for (int c = 3; c < 106; c++)
	    for (int b = 3; b < 106; b++)
	      for (int a = 3; a < 106; a++)
	      {
	        
	       B[a][b]=B[a-3][b-1]/0.335;
	        
	       B[a][b]=B[a-3][b]-A[a];
	        
	       A[a]=B[a][b];
	       A[a+4]=B[a][b];
	      }

    return 0;
}