#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(500, "zeros");
	int *A = create_one_dim_int(610, "zeros");
	int *B = create_one_dim_int(520, "zeros");

	for (int d = 2; d < 520; d++)
	  for (int c = 2; c < 520; c++)
	    for (int b = 2; b < 520; b++)
	      for (int a = 2; a < 520; a++)
	      {
	        
	       B[a]=B[a-2]/C[a];
	        
	       B[a]=A[a]/C[a];
	        
	       A[a]=A[a]/B[a];
	       B[a]=A[a+1]*C[a]-B[a];
	      }

    return 0;
}