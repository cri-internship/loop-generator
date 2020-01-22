#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(930, "zeros");
	int *A = create_one_dim_int(720, "zeros");

	for (int c = 2; c < 718; c++)
	  for (int b = 2; b < 718; b++)
	    for (int a = 2; a < 718; a++)
	    {
	      
	      B[a]=B[a-2]*21;
	      
	      B[a]=B[a+2]/A[a];
	      
	      A[a]=20;
	      A[a]=41;
	      
	      int var_a=B[a]*39;
	      
	      B[a]=A[a]-B[a];
	      A[a]=A[a+2]*B[a];
	      
	      int var_c=B[a]-7;
	    }

    return 0;
}