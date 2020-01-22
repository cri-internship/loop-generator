#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(220, 910, "random");
	float **B = create_two_dim_float(110, 710, "random");

	for (int d = 5; d < 710; d++)
	  for (int c = 3; c < 110; c++)
	    for (int b = 3; b < 110; b++)
	      for (int a = 3; a < 110; a++)
	      {
	        
	       A[a][b]=A[a][b-4]*B[a][b];
	        
	       A[a][b]=B[a][b];
	        
	       B[a][b]=0.561;
	       B[a-2][b-5]=0.304;
	      }

    return 0;
}