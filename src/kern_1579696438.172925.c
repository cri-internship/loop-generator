#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(370, "ones");
	int *B = create_one_dim_int(240, "ones");
	int *C = create_one_dim_int(800, "ones");

	for (int d = 1; d < 236; d++)
	  for (int c = 1; c < 236; c++)
	    for (int b = 1; b < 236; b++)
	      for (int a = 1; a < 236; a++)
	      {
	        
	       A[a]=A[a-1]*33;
	        
	       C[a]=C[a-1]/A[a]+B[a];
	        
	       B[a]=26/C[a];
	       C[a]=B[a]*A[a]/C[a];
	        
	       A[a]=B[a];
	        
	       B[a]=40;
	        
	       int var_a=B[a]-23;
	       int var_b=B[a+4]-25;
	      }

    return 0;
}