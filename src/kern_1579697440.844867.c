#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(920, "random");
	int *C = create_one_dim_int(340, "random");
	int *A = create_one_dim_int(130, "random");

	for (int d = 5; d < 130; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       A[a]=50-C[a];
	       A[a]=A[a]/B[a];
	        
	       B[a]=6;
	       float  var_a=B[a]*46;
	        
	       C[a]=A[a]/41;
	       B[a]=A[a-1]*B[a];
	      }

    return 0;
}