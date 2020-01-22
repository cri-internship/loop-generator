#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(950, "ones");
	int *D = create_one_dim_int(350, "ones");
	int *C = create_one_dim_int(400, "ones");
	int *A = create_one_dim_int(270, "ones");

	for (int d = 5; d < 350; d++)
	  for (int c = 5; c < 350; c++)
	    for (int b = 5; b < 350; b++)
	      for (int a = 5; a < 350; a++)
	      {
	        
	       D[a]=D[a-3]*C[a]-B[a]+A[a];
	        
	       B[a]=50;
	       B[a-5]=34;
	      }

    return 0;
}