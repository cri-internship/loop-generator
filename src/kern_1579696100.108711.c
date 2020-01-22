#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(880, "ones");
	int *B = create_one_dim_int(390, "ones");

	for (int d = 5; d < 390; d++)
	  for (int c = 5; c < 390; c++)
	    for (int b = 5; b < 390; b++)
	      for (int a = 5; a < 390; a++)
	      {
	        
	       A[a]=A[a-5]-B[a];
	        
	       B[a]=A[a]/45;
	       A[a]=A[a-1]/B[a];
	        
	       B[a]=B[a]+A[a];
	      }

    return 0;
}